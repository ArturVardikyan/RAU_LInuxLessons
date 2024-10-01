#include <iostream> //Using libraries for file managment
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <cstring>

//Define method for secure deleting
void secureDelete(const char* filePath){
    //Opening file for writing(O_WRONLY - write-only mode)
    int fd = open(filePath,O_WRONLY);
    
    //Checking if the file opened succesfuly
    if(fd == -1){
        perror("Error opening file");
    }
    
    //Creating the stuct to hold file information
    struct stat fileStat;
    //Geting dile status
    if(fstat(fd,&fileStat) == -1){
        perror("Error geting file information");
        close(fd);
        return;
    }
    
    //Extracting file size
    size_t fileSize = fileStat.st_size;
    
    //Creating buffer for null bytes
    char* buffer = new char[fileSize];
    
    //Filling buffer with null bytes
    memset(buffer,'\0',fileSize);
    
    //Cheking if writing is ended succesfuly
    if(write(fd,buffer,fileSize)==-1){
        perror("Error getting file information");
    
    }

    //Deleting buffer
    delete[] buffer;
    
    //Closing the file 
    close(fd);

    //Deleting the file pointer(path) and chechikg if this ended succesfully
    if(unlink(filePath) == -1){
        perror("Error deleting file");

    }
    else
    {
        std::cout << "File succesfuly deleted";
    }
}
    //Main function of the programm
    int main(int argc , char* argv[]){
        //Checking the command line arguments count
        if(argc != 2){
            std::cerr << "Using : " << argv[0] << " <File_Path>" << std::endl;
            return 1;
        }
        //If arguments is correct calling our method with our argument;
        secureDelete(argv[1]);
        return 0;
    }

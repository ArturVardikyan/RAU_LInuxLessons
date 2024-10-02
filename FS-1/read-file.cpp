#include <iostream> //Using libraries for file managment
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <cstring>


//Defining method for file opening/reading
void readFile(const char* filePath){
    //calling  std func for file opening 
    int fd = open(filePath,O_RDONLY);

    //Cheking if file opened succefully
    if (fd == -1)
    {
       perror("Error opening file");
    }
    struct stat fileStat;
    //Geting dile status
    if(fstat(fd,&fileStat) == -1){
        perror("Error geting file information");
        close(fd);
        return;
    }

    //Geting 1kb for reading
    char buffer[1024];
    ssize_t byteRead = 0;
    //Defining cikle for reading
    while((byteRead = read(fd,buffer, sizeof(buffer))) > 0){
        std::cerr.write(buffer, byteRead);
    }
    if(byteRead == -1){
        std::cerr << "Error reading file";
    }
    //Closing the file
    close(fd);
} 

//Main function for our method
int main(int argc , char* argv[]){
    
    //chechinkg if the arguments have right count
    if(argc < 2){
        std::cerr << "Error : needing file path" << std::endl;
        return 1;
    }
    
    //calling our method
    readFile(argv[1]);
    return 0;
}
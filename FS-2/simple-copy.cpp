#include <iostream> //Using libraries for file managment
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <cstring>

void simpleCopy(const char* sourceFilePath,const char* toCopyInFilePath){
    
    //Opening file for copyying in binary code for any types of files
    int sfd = open(sourceFilePath,O_RDONLY);
    //Checkig if we can open it
    if(sfd == -1){
        std::cerr << "Error : Cannot open source file" << sourceFilePath << std::endl;
        return;
    }
    
    
    int tcfd = open(toCopyInFilePath,O_WRONLY);
    
    //Checkig if we can open it
    if(tcfd == -1){
        std::cerr << "Error : Cannot open to copy in file" << toCopyInFilePath << std::endl;
        return;
    }
    //Opening file that we will copy in , in binary code again for any types of files
    

    char buffer[1024];
    ssize_t bytesRead;
    //Copying file
    while ((bytesRead = read(sfd, buffer, sizeof(buffer))) > 0) {
        if (write(tcfd, buffer, bytesRead) == -1) {
            std::cerr << "Error: Failed to write to destination file: " << strerror(errno) << std::endl;
            close(sfd);
            close(tcfd);
            return;
        }
    }
    if (bytesRead == -1)
    {
        std::cerr  << "Error reading source file" << std::endl;
    }
    else 
    {
        std::cout << "File copied sccesfully" << std::endl;    
    }
    close(sfd);
    close(tcfd);
}
    //Main function of the programm
    int main(int argc , char* argv[]){
        //Checking the command line arguments count
        if(argc != 3){
            std::cerr << "Using : " << argv[0] << " <Source_File_Path>" << "To_Copy_In_File_Path" << std::endl;
            return 1;
        }

        //If arguments is correct calling our method with our argument;
        simpleCopy(argv[1],argv[2]);
        return 0;
    }


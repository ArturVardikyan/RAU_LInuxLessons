#include <iostream>
#include <fstream> // using libraries for system calls
#include <unistd.h>
#include <fcntl.h>

void Initialize(int argc , char** argv){

    //checking if the method arguments are 2 
    if (argc != 2)
    {
        std::cerr << "Using : " << argv[0] << "<input-file>" << std::endl;
        exit(1);
    }
    
    //opening file by system call
    int file = open(argv[1],O_RDONLY);

    //cheking if opened it
    if(file < 0){
        std::cerr << "Error : Failed to open file"<< std::endl;
        exit(1);
    }

    //redirecting descriptor to standart input and checking if its done succesfully
    if (dup2(file , STDIN_FILENO) < 0)
    {
        std::cerr << "Error : Failed redirect to standart input" << std::endl;
        exit(1);
    }
    
    //closing file :)
    close(file);
}
int main(int argc , char** argv){
    Initialize(argc,argv);
    
    std::string input;
    std::cin >> input;

    //reversing line
    std::string reversed(input.rbegin() , input.rend());

    //output of reversed lines
    std::cout << reversed << std::endl;
}
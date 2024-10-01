#include <iostream> // Using libraries for file managment
#include <fstream>
#include <cstring>
#include <cerrno>

//Defining method for file opening/reading
void readFile(const char* filePath){
    //calling  std func for file opening 
    std::ifstream file(filePath);

    //Cheking if file opened succefully
    if(!file.is_open()){
        std::cerr << "Error opening file " << strerror(errno) << std::endl;
        return;
    }
    //Geting 1kb for reading
    char buffer[1024];
    //Defining cikle for reading
    while(file.read(buffer, sizeof(buffer)) || file.gcount() > 0){
        std::cout.write(buffer, file.gcount());
    }
    //Closing the file
    file.close();
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
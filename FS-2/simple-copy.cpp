#include <iostream> // Using libraries for file managment
#include <fstream>

void simpleCopy(const char* sourceFilePath,const char* toCopyInFilePath){
    
    //Opening file for copyying in binary code for any types of files
    std::ifstream src(sourceFilePath,std::ios::binary);
    
    //Checkig if we can open it
    if(!src){
        std::cerr << "Error : Cannot open source file" << sourceFilePath << std::endl;
        return;
    }

    //Opening file that we will copy in , in binary code again for any types of files
    std::ofstream dest(toCopyInFilePath,std::ios::binary);

    //Checking if we can open it
    if(!dest){
        std::cerr << "Error : Cannot open to copy in file" << toCopyInFilePath << std::endl;
        return;
    }

    //Copying file
    dest << src.rdbuf();
    std::cout << "File copied sccesfully" << std::endl;
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


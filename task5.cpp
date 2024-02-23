#include<iostream>
#include<fstream>

int main(){
    std::ofstream oFile("exemple.txt");
    const char* name[] = {"Ashot" , "Aram" , "Bill" , "Victor"};

    if(!oFile.is_open()){
        throw "File is close";
    }

    for(int i = 0 ; i < sizeof(name)/sizeof(name[0]) ; ++i){
        oFile << name[i] << std::endl;
    }
    oFile.close();
    std::ifstream iFile("exemple.txt");
    
    std::string line;
    
    if(!iFile.is_open()){
        throw "File is close";
    }

    while (std::getline( iFile, line)){
        std::cout << line << " ";
    }
   
    std::cout << std::endl;
    
    
    iFile.close();
   
    return 0;
}

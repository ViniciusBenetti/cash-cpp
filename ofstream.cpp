#include <iostream>
#include <fstream>
#include <string>


int main(){
    std::ofstream OutFile;
    std::ifstream InputFile("Teste.txt");
    OutFile.open("teste.txt",std::ios_base::app);

    std::string texto;


    for(std::string line; std::getline(InputFile,line);){
        if(line!="Hello World"){
            OutFile << "Hello World";
        }else{
            OutFile << "\nOlá Mundo";
        }

    }
    OutFile.close();
    




}

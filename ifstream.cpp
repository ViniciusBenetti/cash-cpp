#include <fstream>
#include <iostream>
#include <string>

int main(){
    std::ifstream InputFile("teste.txt");

    std::string textoLido;
 
    //Passa o texto do arquivo para a string
    for(std::string line; getline(InputFile, line);){
        textoLido += line;
    }
 
    //Mostrar o conteúdo
    std::cout << textoLido;
 
    return 0;
}

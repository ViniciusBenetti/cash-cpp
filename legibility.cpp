#include <iostream>
#include <string>
#include <cmath>


int main(){
    std::string texto,grade;
    double S =1.0,L=1.0,letras=0,frases=0,palavras=1;

    std::cout << "digite uma frase para verificar a legibilidade\n";
    std::getline(std::cin,texto);

    for (char letra : texto) {
        if(letra != ' '){
        if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')) {
            letras++;
        }else if(letra == '!' || letra == '?' || letra == '.'){
            frases++;
        }

        }
        if(letra == ' '){
            palavras++;
        }

    }
    std::cout << letras << std::endl;
    std::cout << palavras << std::endl;
    std::cout << frases << std::endl;
    L = letras/palavras*100;
    S = frases/palavras*100;

    std::cout << L << std::endl;
    std::cout << S << std::endl;
    grade = "GRADE "+std::to_string(static_cast<int>(std::round(0.0588 * L - 0.296 * S - 15.8)));
    if(static_cast<int>(std::round(0.0588 * L - 0.296 * S - 15.8)) > 16){
        grade = "GRADE 16+";

    }if(static_cast<int>(std::round(0.0588 * L - 0.296 * S - 15.8)) < 1){ 
        grade = "BEFORE GRADE 1";
    }

    std::cout << grade << std::endl;




    return 0;
}

#include <iostream>
#include <string>

std::string cardSplit(std::string c) {
    std::string cardS;
    for (char caractere : c) {
        if (isdigit(caractere)) {
            cardS += caractere;
        }
    }
    return cardS;
}

bool checksum(std::string c) {
    std::string cardS;
    cardS = cardSplit(c);

    int check = 0;
    int tam = cardS.size();
    

    for (int i = 0; i < tam; i++) {
        int digit = cardS[i] - '0';

        if(i%2 == 0){
            digit *=2;
        }
         if (digit > 9) {
                digit -= 9;
        }

    check+=digit;        
    }
    return (check%10 == 0);
    
}

void kindof(std::string c) {
    std::string cardS;
    cardS = cardSplit(c);
    checksum(c);

    int tam = cardS.size();

    if (cardS[0] == '3' && (cardS[1] == '4' || cardS[1] == '7') && tam == 15 && checksum(c)) {
        std::cout << "o tipo de cartão é American Express e valido\n";
    } else if (cardS[0] == '5' && (cardS[1] == '1' || cardS[1] == '2' || cardS[1] == '3' || cardS[1] == '4' || cardS[1] == '5') && tam == 16 && checksum(c)) {
        std::cout << "o tipo de cartão é MasterCard e valido\n";
    } else if (cardS[0] == '4' && (tam >= 13 && tam <= 16 && checksum(c))) {
        std::cout << "o tipo de cartão é Visa e valido\n";
    } else {
        std::cout << "cartão inválido\n";
    }
}

int main() {
    std::string cartao;
    std::cout << "digite o numero do seu cartão de crédito:\n";
    getline(std::cin, cartao);
    kindof(cartao);
    return 0;
}

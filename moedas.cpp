#include <iostream>

int main(){
    auto troco = 0,moedas =0;

    std::cout << "digite o troco em centavos:\n";
    std::cin >> troco;

    while (troco > 0)
    {
    if(troco%25 == 0){
        troco -=25;
        moedas++;
    }
    else if(troco%10 == 0){
        troco -=10;
        moedas++;
    }
    else if(troco%5 == 0){
        troco -=5;
        moedas++;
    }
    else if(troco%1 == 0){
        troco -=1;
        moedas++;
    }

    }
    std::cout <<"minimo de moedas: " << moedas << std::endl;
    return 0;
}

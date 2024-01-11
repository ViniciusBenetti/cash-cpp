#include <iostream>

int main(){
    int inicial = 0,final=0,anos=0,crescimento=0;

    std::cout << "digite a população inicial\n";
    std::cin >> inicial;

    while(inicial <9){
        std::cout << "a população inicial deve ser maior que 9\n";
        std::cin >> inicial;
    }
    std::cout << "digite a população final\n";
    std::cin >> final;

    while(final < inicial){
        std::cout << "a população final deve ser maior que a inicial\n";
        std::cin >> final;
    }
    while(final - inicial > 1){
    inicial += (inicial/3) - (inicial/4);
    anos++;
    }
    std::cout << "a quantidade de anos é: " << anos << std::endl;
    return 0;
}

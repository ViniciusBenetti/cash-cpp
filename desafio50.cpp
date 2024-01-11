#include <iostream>

int main(){
    std::string chave;
    std::string palavra;
    int escolha,j=0;

    std::cout << "escolha o metodo de chaveamento, 1 a 5:\n";
    std::cin >> escolha;

    switch (escolha)
    {
    case 1:
        chave = "QWERTYUIOPASDFGHJKLZXCVBNM";
        break;
    case 2:
        chave = "MNBVCXZLKJHGFDSAPOIUYTREWQ";
        break;
    case 3:
        chave = "JTREKYAVOGDXPSNCUIZLFBMWHQ";
        break;
    case 4:
        chave = "QAZWSXEDCRFVTGBYHNUJMIKOLP";
        break;
    case 5:
        chave = "ASDFGHLKJMZNXCVBPQOWIEURYT";
    default:
        std::cout << "metodo errado, reinicie o programa";
        break;

    }
    
    std::cout << "escolha o texto ou palavra que quer chavear" << std::endl;
    std::cin>> palavra;
    int tam = palavra.length();

    for (int k = 0; k < tam; k++) {
        if (palavra[k] >= 'A' && palavra[k] <= 'Z') {
            int indiceChave = palavra[k] - 'A'; //aqui ele diminui o valor 'E' de 'A' e obtém 4
            palavra[k] = chave[indiceChave]; // aqui ele coloca no valor chave[8] que é V
        }
    }
    std::cout << palavra << std::endl;

    return 0;
}

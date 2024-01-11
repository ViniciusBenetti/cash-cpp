#include <new>
#include <stdio.h>
#include <string>

int main(){
    std::string palavra;
    auto tam=0;
    printf("digite o tamanho do vetor");
    scanf("%i",&tam);

    std::string *vetor = new std::string[tam];

    for(int i =0;i<tam;i++){
        printf("digite o vetor de indice %i ",i);
        scanf("%s",&vetor[i]);


    }
    for(int i=0;i<tam;i++){
        printf("palavra de indice %i é %s ",i,vetor[i]);
    }
    

}

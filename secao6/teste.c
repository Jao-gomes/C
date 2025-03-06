#include <stdio.h>

int main(){
    int valor = 2;
    printf("O valor do número é %d\n", valor);
    
    //deslocamento para direita
    valor = valor >> 1;
    printf("Agora o valor do número é %d\n", valor);

    valor = 2;

    //deslocamento para esquerda
    valor = valor << 2;
    printf("Agora o valor do número é %d\n", valor);

    valor = 2;

    //negação do valor
    valor = ~valor;
    printf("Agora o valor do número é %d\n", valor);


    return 0;
}
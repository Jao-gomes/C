#include <stdio.h>

int main() { //as chaves delimitam o bloco de código/escopo
    //declarando variável
    //int guardar valores inteiros
    int idade;
    // int idade = 0; // declarando e inicializando a variavel com valor 0 
    //função para escrever algo na saída padrão (console)
    printf("Qual é a sua idade ?\n");

    scanf("%d", &idade);

    printf("A sua idade é %d \n",idade);
    
    return 0;
}
// 2. Faça um programa que tenha uma função que, dado um caractere qualquer de entrada, retorne o mesmo
// caractere sempre em maiúsculo. 

#include <stdio.h>
#include <ctype.h>

char maiusculo(char str){
    return toupper(str);
}

int main(){
    char str;
    printf("Digite o caractere:\n" );
    char letter = fgets(str);
    char result = maiusculo(letter);
    printf("%c", result);
    return 0;
}
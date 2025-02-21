/// para entrada de valores eu irei utilizar a função scanF

#include <stdio.h>

int main(){
    printf("Soma de 3 valores inteiros\n");

    int num1, num2, num3;

    printf("Digite 3 valores inteiros: \n");

    scanf("%d %d %d", &num1, &num2, &num3);

    int result = num1 + num2 + num3;

    printf("O valor da soma dos três números inteiros são %d", result);

    return 0;
}

// 1. Faça um programa que tenha uma função que receba um vetor de inteiros como parâmetro e retorne o
// maior valor. 
#include <stdio.h>

int higheastValue (int numbers[10]);

int main(){
    printf("Digite 10 números inteiros entre 0 e 100:\n");
    // int n0, n1, n2, n3, n4, n5, n6, n7, n8, n9;
    // scanf("%d%d%d%d%d%d%d%d%d%d", &n0, &n1, &n2, &n3, &n4,&n5, &n6, &n7, &n8, &n9);

    int arrayOfNumbers[10];
    // int count = 0;
    int number;

    //salvo o que o usuário manda e além disso populo o vetor(array);
    for (int i = 0; i < 10; i++){
        scanf("%d", &number);
        arrayOfNumbers[i] = number;
    }
    
    int result = higheastValue(arrayOfNumbers);

    printf("O maior valor digitado foi %d\n", result);

    return 0;
}

int higheastValue (int numbers[10]){
    int high = numbers[0];
     for (int i = 0; i < 10; i++){
        // if(numbers[0] > numbers[i]){
        //     printf("%d",numbers[0]);
        // } else(numbers[1] > numbers[i]){
        //     printf("%d",numbers[1]);
        // }
        if(numbers[i] > high){
            high = numbers[i];
        }
     }
     
    return high;
}
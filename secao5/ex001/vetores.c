#include <stdio.h>

int main(){
    int A[6];
    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;

    int sumOfNumbers = A[0] + A[1] + A[5];
    printf("A soma dos números é %d\n", sumOfNumbers);\

    A[4] = 100;

    for (int i = 0; i < 6; i++){
        printf("Os Números do array são %d\n", A[i]);
    };
    
    return 0;
}

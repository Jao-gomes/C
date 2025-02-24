#include <stdio.h>

int main (){
    int num = 1;
    int count = 0;

    printf("Números multiplos de 5 \n");

    while (count < 5){
        if(num % 3 == 0){
            printf("o numero %d é múltiplo de 3. \n", num);
            count = count++;
        }
        num = num++;
    }
    return 0;
}
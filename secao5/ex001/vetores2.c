#include <stdio.h>

int main(){
    int numbers[10];
    int count = 0;
    for (int i = 0 ; i < 10; i++){
        numbers[i] = count;
        count = count + 1;
        if(numbers[i] % 2 == 0 ){
            printf("%d\n", numbers[i]);
        }
    }

    float A[10];
    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;
    A[6] = 20;
    A[7] = 10;
    A[8] = -120;
    A[9] = -5;
    A[10] = 7;
    
    for(int i = 0; i <10; i++){
        if(A[i] < 0){
            A[i] = 0;
            printf("%f", A[i]);
        }
    }
    return 0;


}

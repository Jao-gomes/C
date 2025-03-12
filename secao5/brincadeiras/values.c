#include  <stdio.h>


int main (){
    float numbers[5][5];
    float count = 0;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            numbers[i][j] = count;
            count = count + 1;
            printf("números [%d] [%d] valem %1.f\n", i, j, numbers[i][j]);
        }
        
    }
    return 0;
    
}
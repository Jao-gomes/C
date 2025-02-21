#include <stdio.h>

int main() {
    printf("Digite 4 notas suas: \n");
    float nota1, nota2, nota3, nota4, arithmeticMean;
    scanf("%f%f%f%f", &nota1, &nota2, &nota3, &nota4);
    arithmeticMean = (nota1 + nota2 + nota3 + nota4)/4;
    printf("A média aritmética da sua nota é: %2.f", arithmeticMean);

    if(arithmeticMean <= 6){
        printf("Você está de recuperação \n");
    }else{
        printf("Parabéns, Você passou \n");
    }
    
    return 0;
}

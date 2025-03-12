#include <stdio.h>
#define EXCLAMATION 33

int main (){
    int number;
    // int exclamation = 33;
    printf("Digite um número INTEIRO MAIOR QUE ZERO! \n");
    scanf("%d",&number);

    if (number <= 0){
        printf("eu sou uma piada para você ?\n");

        return 1;
    }

    // for (int i = 0; i < number; i++){
    //     if (number == 1){
    //         // for (i = 0; i < number; i++){
    //         // int salvar = EXCLAMATION;
    //         printf("%c\n", EXCLAMATION);
    //         // for (int i = 0; i < number - 1; i++){
    //         //     printf()
    //         // }
            
    //         //}
            
    //     }
    //     printf("%c\n", EXCLAMATION);
    //     for (i = 0; i < number -1; i++)
    //     {
    //         printf("%c\n", EXCLAMATION)
    //     }
        
    // }
    for (int i = 1; i <= number; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c", EXCLAMATION);
        }
        printf("\n");
    }

    // int exclamacao = 33;
    // printf("%c", exclamacao);
    return 0; //TABELA ASCII SALVANDO PORRA
}
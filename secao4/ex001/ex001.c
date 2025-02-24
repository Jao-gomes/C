// #include <stdio.h>

// // para um numero ser multiplo de 3  o modulo dele dividido por 3 tem que ser igual a 0
// // o codigo tem que armazenar 5 numeros:
// // quando o codigo armazernar 5 numeros ele vai printar na tela
// // essa é a logica

// int main(){
//     int somOfNumbers = 1;
//     int num = somOfNumbers++;
//     int arrayOfNums[5];
    
//     for (int i = 0; i < 5; i++)
//     {
//         if(num % 3 == 0){
//             arrayOfNums = num;
//         }
//     }

//     // printf("Os cincos primeiros multiplos de 3 são");
    

//     return 0;
// }


#include <stdio.h>

int main (){
    int num = 1;
    int count = 0;

    printf("Números multiplos de 5 \n");

    while (count < 5){
        if(num % 3 == 0){
            printf("o numero %d é múltiplo de 3. \n", num);
            count = count + 1;
        }
        num = num + 1;
    }
    return 0;
}
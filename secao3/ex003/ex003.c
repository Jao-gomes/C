// #include <stdio.h>
// // tres entradas de dinheiro valor float;
// // o premio deve ser repartido propocionalmente valor float
// // para ganhar na loteria precisa-se de 6 numeros corretos
// // int main() {
// //     printf("INFORME O QUANTO CADA PESSOA INVESTIU NO BOLÃO");
// //     int award =  1000000000;
// //     float ticket1, ticket2, ticket3;
// //     print("INFORME OS 6 NÚMEROS DO BOLÃO");
// //     scanf("%d,%d,%d,%d,%d,%d", &choise1, &choise2, &choise3, &choise4, &choise5, &choise6);
// //     int numbersOfAward[] = {10, 23, 12, 4, 57, 45};
// //     // int num1 = 10;
// //     // int num2 = 23;
// //     // int num3 = 12;
// //     // int num4 = 4;
// //     // int num5 = 57;
// //     // int num6 = 45;
// //     //serão duas condicionais você ganhou ou perdeu;

// //     if(choise1 ==  )

// //     return 0;
// // }
// int main(){
//     float investment1, investment2, investment3, investmentTotal;
//     int award =  1000000000;
//     scanf("%f,%f,%f", &investment1, &investment2, &investment3);

//     investmentTotal = investment1 + investment2 + investment3;

//     float firstPerson = (investment1 / investmentTotal) * 1000000000;
//     float secondPerson = (investment2 / investmentTotal) * 1000000000;
//     float thirdyPeson = (investment3 / investmentTotal) * 1000000000;

//     printf("A primeira pessoa ganhou: %f\n A segunda pessoa ganhou: %f\n A terceira pessoa ganhou %f\n")


//     return 0;
// }

// CHAT GEPETECO !!! 
#include <stdio.h>

int main() {
    // Declaração das variáveis
    float aposta1, aposta2, aposta3, premio;
    float total_apostas, parte1, parte2, parte3;

    // Leitura dos valores apostados por cada amigo
    printf("Digite o valor apostado pelo primeiro amigo: ");
    scanf("%f", &aposta1);
    printf("Digite o valor apostado pelo segundo amigo: ");
    scanf("%f", &aposta2);
    printf("Digite o valor apostado pelo terceiro amigo: ");
    scanf("%f", &aposta3);

    // Leitura do valor do prêmio
    printf("Digite o valor do prêmio: ");
    scanf("%f", &premio);

    // Calculando o total apostado
    total_apostas = aposta1 + aposta2 + aposta3;

    // Calculando a parte do prêmio que cada um vai ganhar
    parte1 = (aposta1 / total_apostas) * premio;
    parte2 = (aposta2 / total_apostas) * premio;
    parte3 = (aposta3 / total_apostas) * premio;

    // Exibindo o valor que cada um vai receber
    printf("\nO primeiro amigo ganharia: R$ %.2f\n", parte1);
    printf("O segundo amigo ganharia: R$ %.2f\n", parte2);
    printf("O terceiro amigo ganharia: R$ %.2f\n", parte3);

    return 0;
}

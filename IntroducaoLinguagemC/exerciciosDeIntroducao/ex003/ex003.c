// #include <stdio.h>
// #include <math.h>

// int main(){
//     printf("função para retornar o quadrado de um número: \n");
//     printf("Digite um número inteiro: \n");

//     double num1, num2;

//     scanf("%lf%lf", &num1, &num2);

//     printf("%.2lf", pow(num1, num2));

//     return 0;
// }
 
#include <stdio.h>											
#include <math.h>

int main() {
  double x, y;
  scanf("%lf%lf", &x, &y);
  printf("%.2lf", pow(x, y));
  return 0;
}
#include <stdio.h>											
#include <math.h>

//float exigem geralmente 4 bytes
//double exigem 8 bytes de memória
//int ocupam 2 bytes de memória

int main() {
  printf("Insira 3 números  um de cada vez, e aperte enter a cada número: \n");  
  float num1, num2, num3, squareNum1, squareNum2, squareNum3, sumOfSquares;
  scanf("%f%f%f", &num1, &num2, &num3);

  squareNum1 = pow(num1, 2);
  squareNum2 = pow(num2, 2);
  squareNum3 = pow(num3, 2);

  sumOfSquares = squareNum1 + squareNum2 + squareNum3;

  printf("A soma dos quadrados dos números digitados são: %.0f \n", sumOfSquares);

  return 0;
}
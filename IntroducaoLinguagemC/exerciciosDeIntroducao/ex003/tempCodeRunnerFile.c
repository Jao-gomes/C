
#include <stdio.h>											
#include <math.h>

int main() {
  double x, y;
  scanf("%lf%lf", &x, &y);
  printf("%.2lf", pow(x, y));
  return 0;
}
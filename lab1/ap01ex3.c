#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  int a, b, c;
  float area, s;
  
  // valores do triangulo retangulo:
  
  printf("Escreva o cateto a: ");
  scanf("%i", &a);
  printf("Escreva o cateto b: ");
  scanf("%i", &b);
  printf("Escreva a hipotenusa c: ");
  scanf("%i", &c);
  
  //calculando a area do triangulo:
  
  s = (a + b + c) / 2;
  area = sqrt(s * (s - a) * (s - b) * (s - c));
  printf("Valor da area: %.2f", area);

  return 0;
}

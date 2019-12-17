#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    float a, e, f, v1, v2, v3;
    int b, c, d;
	
	// valor das variaveis:
	
    a = 1.5;
    b = 4;
    c = 2;
    d = 3;
    e = 1.2;
    f = 4.3;
    
    // expressoes a calcular:
    
    v1 = (a * (c + d)) / (b * (e + f));
    v2 = pow(a, b + c) / (e + f) + d;
    v3 = (-b + (sqrt(pow(b, 2) - 4 * a * c))) / (2 * a);
    
    // valores obtidos:
    
    printf("Valor de V1: %f \n", v1);
    printf("Valor de V2: %f \n", v2);
    printf("Valor de V3: %f \n", v3);

    return 0;
}

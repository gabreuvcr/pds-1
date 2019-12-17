#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int x;
    short int y;
    unsigned char a;
    
	// valores maximos:
	
    x = pow(2, 31) - 1;
    y = pow (2, 15) - 1;
    a = pow (2, 8) - 1;
    printf("Valores maximos:\n");
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", a);
    
    // somando 1 aos valores maximos:
    
    x = x + 1;
    y = y + 1;
    a = a + 1;
    printf("Estouro de memoria:\n");
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", a);

    return 0;
}

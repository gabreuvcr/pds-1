#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    float d, valor;

    d = 500;

	// calculando o valor final apos 3 meses com formula de juros composto:
    
	valor = d * pow((1 + 0.01), 3);
    printf("O valor e %.2f", valor);

    return 0;
}

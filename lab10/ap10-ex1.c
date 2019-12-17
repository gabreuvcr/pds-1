#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// an = a1 * q ^n-1

void pg(int r, int vi, int nt, int n) {
    int an;
    if(n <= nt) {
        an = vi * pow(r, n - 1);
        printf("Termo %d: %d\n", n, an);
        pg(r, vi, nt, n+1);
    }
}

int main(){
    int razao, valor_inicial, num_termos, n;
    n = 1;
    printf("Digite a razao da PG: ");
    scanf("%d", &razao);
    printf("Digite o valor inicial da PG: ");
    scanf("%d", &valor_inicial);
    printf("Digite o numero de termos: ");
    scanf("%d", &num_termos);
    printf("\n");
    
    pg(razao, valor_inicial, num_termos, n);
    
    return 0;
}

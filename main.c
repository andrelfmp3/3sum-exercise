#include <stdio.h>
#include <stdlib.h>
#include "threesum.h"

// para compilar:       gcc main.c threesum.c && ./a.out   

int *A;

int main()
{
    int n;
    printf("\n ---Projeto 01 - 3SUM--- \n");

    printf("\n Definir o tamanho do Array: ");
    scanf("%d", &n);

    A = (int*) malloc (n * sizeof(int));

    for(int i=0; i<n; i++) {
        printf(" Entre com o %d elemento do Array: ", i+1);
        scanf("%d", &A[i]);
    }

    ImprimeArray(A, "Array Infor.   []", n);
    treeSumForcaBruta(A, n);
    treeSumMelhorado(A, n);
    ImprimeQtdOperacoes();

    return 0;
}


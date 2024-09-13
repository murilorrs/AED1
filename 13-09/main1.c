#include <stdio.h>

int somaVet(int *vet, int n);


int main () {

    int vet[5] = {1,2,3,4,5};

    printf("%d\n", somaVet(vet, 5));

    return 0;
}

int somaVet(int *vet, int n){

    if (n == 1)
        return vet[0];
    else
        return vet[n - 1] + somaVet(vet, n - 1);
}

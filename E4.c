#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int vetor[18];
    int matriz[3][6];
    int contador = 0;

    for(int k = 0; k < 18; k++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[k]);
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 6; j++){
            matriz[i][j] = vetor[contador];
            contador++;
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 6; j++){
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int Matriz[2][2];

    int maior = 0;

    printf("Digite uma matriz 2x2:\n"); 

    for (int i=0;i<2;i++){ 

        for (int j=0;j<2;j++){

            scanf("%d",&Matriz[i][j]); 

            if (Matriz[i][j] > maior) maior = Matriz[i][j]; 
        }      
    }
    for (int i=0;i<2;i++){ 
        for (int j=0;j<2;j++){
            Matriz[i][j] *= maior;
        }    
    }
    
    printf("Maior número da matriz: %d\n",maior);
    printf("Nova matriz B:\n");

    for (int i=0;i<2;i++){ 
        for (int j=0;j<2;j++){
            printf("%d ",Matriz[i][j]);
        }    
        printf("\n");  
    }
}

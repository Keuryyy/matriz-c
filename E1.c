#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  
    int matriz[3][3];
  
    int maior = 0;

    for(int i = 0; i < 3; i++){
      
        for(int j = 0; j < 3; j++){
          
            printf("Digite um numero: ");
            scanf("%d", &matriz[i][j]);

            if(matriz[i][j] > maior) maior = matriz[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%4d", matriz[i][j]);
        }
    }

    printf("Maior valor = %d\n", maior);
}

#include <stdio.h>
#include <stdlib.h>
 
int main() {

    int menor, posicao, n;
    menor = 10000;
    scanf("%d", &n);
    int * vetor = malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
        scanf("%d", vetor + i);
        if(*(vetor + i) < menor){
            menor = *(vetor + i);
            posicao = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);
    
    return 0;
}
#include <stdio.h>
 
int main() {

    int menor, posicao, n, resposta;
    scanf("%d", &n);
    int x[n];
    for(int i = 0; i < n; i++){
        printf("x[%d] = %d", i, x[i]);
        scanf("%d", &x[i]);
        if(i==0){
            menor = x[i];
            posicao = i;
        }else{
            if(x[i] < x[i - 1]){
                menor = x[i];
                posicao = i;
            }
        }
        printf("x[%d] = %d", i, x[i]);
    }
    printf("Menor valor: %d \n", menor);
    printf("Posicao: %d \n", posicao);
    
    return 0;
}
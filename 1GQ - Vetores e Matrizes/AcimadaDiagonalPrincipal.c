#include <stdio.h>

int main(){
    float soma = 0.0;
    char operacao;
    scanf("%c", &operacao);
    float matriz[12][12];
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%f", &matriz[i][j]);
            if(j > i){
                soma += matriz[i][j];
            }
        }
    }
    if(operacao == 'S'){
        printf("%.1f\n", soma);
    }else if(operacao == 'M'){
        printf("%.1lf\n" , soma/66);
    }
    return 0;
}
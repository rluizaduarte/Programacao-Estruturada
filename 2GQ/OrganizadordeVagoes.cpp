#include <stdio.h>
#include <stdlib.h> 

// cria o vetor que contém os vagões
int * criarVetor(int tam){
    int * vetor = (int *) malloc(sizeof(int) * tam);
    for(int i = 0; i < tam; i++){
        int valor;
        scanf("%d", &valor);
        *(vetor + i) = valor;
    }
    return vetor;
}

// troca dois elementos dentro de um vetor
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// conta quantas vezes será necessário trocar
int contaSwaps(int * vetor, int tam){
    int swaps = 0;
    for(int i = 1; i < tam; i++){
        for(int j = i; j > 0; j--){
            if(vetor[j] < vetor[j - 1]){
                swap(&vetor[j], &vetor[j - 1]);
                swaps++;
            }
        }
    }
    return swaps;
}
   
int main() {
    int n, l;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &l);
        int * trem = criarVetor(l);
        int swaps = contaSwaps(trem, l);
        printf("Optimal train swapping takes %d swaps.\n", swaps);
    }
    return 0;
}

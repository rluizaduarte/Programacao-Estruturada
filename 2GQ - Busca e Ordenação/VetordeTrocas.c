#include <stdio.h>
#include <stdlib.h>

int * criaVetor(int tam){
	int * vetor = (int *) malloc(sizeof(int) * tam);
	for(int i = 0; i < tam; i++){
		int valor;
		scanf("%d", &valor);
		*(vetor + i) = valor;
	}
	return vetor;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void trocaVetor(int * vetorOriginal, int * vetorDeTrocas, int tam){
    for(int i = 0; i < tam - 1; i++){
        for(int j = i + 1; j < tam; j++){
            if(*(vetorDeTrocas + i) == *(vetorDeTrocas + j)){
                swap(*(vetorOriginal + i), *(vetorOriginal + j));
                break;
            }
        }
    }
}

void printaVetor(int * vetor, int tam){
	for(int i = 0; i < tam; i++){
	    if(i < tam - 1){
	        printf("%d ", *(vetor + i));
	    }else{
		    printf("%d", *(vetor + i));
	    }
	}
	printf("\n");
}

int main(){
    int n;
    scanf("%d", &n);
    int * vetorOriginal = criaVetor(n);
    int * vetorDeTrocas = criaVetor(n);

    trocaVetor(vetorOriginal, vetorDeTrocas, n);
    printaVetor(vetorOriginal, n);

    return 0;
}
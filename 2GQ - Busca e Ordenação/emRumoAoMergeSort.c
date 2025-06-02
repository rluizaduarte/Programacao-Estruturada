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

void ordenaVetor(int * vetor, int tam){
    for(int i = 1; i < tam; i++){
        for(int j = i; j > 0; j--){
            if(vetor[j] < vetor[j - 1]){
                swap(&vetor[j], &vetor[j - 1]);
            }
        }
    }
}

void juntaVetores(int * vetorA, int * vetorB, int * vetorResultado, int tamA, int tamB){
	for(int i= 0; i < tamA; i++){
		*(vetorResultado + i) = *(vetorA + i);
	}
	for(int i = 0; i < tamB; i++){
		*(vetorResultado + (tamA + i)) = *(vetorB + i);
	}	
}

void printaVetor(int * vetor, int tam){
	for(int i = 0; i < tam; i++){
	    if(i < tam - 1){
	        printf("%d, ", *(vetor + i));
	    }else{
		    printf("%d", *(vetor + i));
	    }
	}
	printf("\n");
}

int main(){
	int nl, nr;
	scanf("%d%d", &nl, &nr);
	int * left = criaVetor(nl);
	int * right = criaVetor(nr);
	int * all = (int *) malloc(sizeof(int) * (nl + nr));

	ordenaVetor(left, nl);
	ordenaVetor(right, nr);
	juntaVetores(left, right, all, nl, nr);
	ordenaVetor(all, (nl + nr));
	
	printaVetor(left, nl);
	printaVetor(right, nr);
	printaVetor(all, (nl + nr));

	return 0;
}

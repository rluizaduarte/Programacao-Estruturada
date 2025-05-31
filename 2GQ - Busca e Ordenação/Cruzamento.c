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

int main(){
	int n, c;
	scanf("%d%d", &n, &c);
	int * pai = criaVetor(n);
	int * mae = criaVetor(n);
	
	return 0;
}
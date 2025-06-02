#include <stdio.h>
#include <stdlib.h>

int ** criaMatriz(int linhas, int colunas){
	int ** matriz = (int **) malloc(sizeof(int *) * linhas);
	for(int i = 0; i < linhas; i++){
		*(matriz + i) = (int *) malloc(sizeof(int) * colunas);
	}
	return matriz;
}

void leMatriz(int ** matriz, int linhas, int colunas){
	for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            scanf("%d", (*(matriz + i) + j));
        }
	}
}

void transposta(int ** matriz, int ** matrizTransp, int linhas, int colunas){
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++){
			*(*(matrizTransp + i) + j) = *(*(matriz + j) + i); 
		}
	}
}

void printaMatriz(int ** matriz, int linhas, int colunas){
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++){
			if(j < colunas - 1){
				printf("%d ", *(*(matriz + i) + j));
			}else{
				printf("%d", *(*(matriz + i) + j));
			}
		}
		printf("\n");
	}
}

void multPelaTransposta(int ** matrizA, int ** matrizAt, int ** matrizB, int linhas, int colunas){
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < linhas; j++){
			*(*(matrizB + i) + j) = 0;
			for(int k = 0; k < colunas; k++){
				*(*(matrizB + i) + j) += *(*(matrizA + i) + k) * *(*(matrizAt + k) + j);
			}
		}
	}
}

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	int ** x = criaMatriz(n, m);
	leMatriz(x, n, m);

	int ** xt = criaMatriz(m, n);
	transposta(x, xt, m, n);
	
	int ** c = criaMatriz(n, n);
	multPelaTransposta(x, xt, c, n, m);
	printaMatriz(c, n, n);

	return 0;
}

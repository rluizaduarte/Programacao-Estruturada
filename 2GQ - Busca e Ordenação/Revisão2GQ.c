#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionCresc(int *vetor, int n){
    for(int i = 0; i < n - 1; i++){
        int menor = i;
        for(int j = i + 1; j < n; j++){
            if(vetor[j] < vetor[menor]){
                menor = j;
            }
        }
        swap(&vetor[i], &vetor[menor]);
    }
}

void selectionDecresc(int *vetor, int n){
    for(int i = 0; i < n - 1; i++){
        int maior = i;
        for(int j = i + 1; j < n; j++){
            if(vetor[j] > vetor[maior]){
                maior = j;
            }
        }
        swap(&vetor[i], &vetor[maior]);
    }
}

void insertionCresc(int *vetor, int n){
    for(int i = 0; i < n; i++){
        for(int j = i; j > 0; j--){
            if(vetor[j] < vetor[j - 1]){
                swap(&vetor[j], &vetor[j - 1]);
            }
        }
    }
}

void insertionDecresc(int *vetor, int n){
    for(int i = 0; i < n; i++){
        for(int j = i; j > 0; j--){
            if(vetor[j] > vetor[j - 1]){
                swap(&vetor[j], &vetor[j - 1]);
            }
        }
    }
}

void bubbleCresc(int * vetor, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(vetor[j] > vetor[j + 1]){
                swap(&vetor[j], &vetor[j + 1]);
            }
        }
    }
}

void bubbleDecresc(int * vetor, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(vetor[j] < vetor[j + 1]){
                swap(&vetor[j], &vetor[j + 1]);
            }
        }
    }
}

void printaVetor(int * vetor, int n){
    printf("\nVetor ordenado: \n");
    for(int i = 0; i< n; i++){
        printf("%d ", *(vetor+i));
    }
    printf("\n");
}

int main(){
    int n;
    printf("Qual o tamanho do vetor? ");
    scanf("%d", &n);
    int * vetorOriginal = (int *) malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
        scanf("%d", vetorOriginal + i);
    }

    int op, ord;
    do{
        int * vetorTemp = (int *) malloc(sizeof(int) * n);
        for(int i = 0; i < n; i++){
            vetorTemp[i] = vetorOriginal[i];
        }

        printf("\nSelecione\n1 - Ordem crescente\n2 - Ordem decrescente\n0 - Sair\n");
        scanf("%d", &op);
        
        if(op == 0){
            break;
        }    
        
        printf("\n1 - Selection sort\n2 - Insertion sort\n3 - Bubble sort\n");
        scanf("%d", &ord);
        
        if(op == 1){
            if(ord == 1){
                selectionCresc(vetorTemp, n);
            }else if(ord == 2){
                insertionCresc(vetorTemp, n);
            }else if(ord == 3){
                bubbleCresc(vetorTemp, n);
            }else{
                printf("Opção inválida!");
                continue;
            }
        }else if(op == 2){
            if(ord == 1){
                selectionDecresc(vetorTemp, n);
            }else if(ord == 2){
                insertionDecresc(vetorTemp, n);
            }else if(ord == 3){
                bubbleDecresc(vetorTemp, n);
            }else{
                printf("Opção inválida!");
                continue;
            }
        }else{
            printf("Opção inválida!");
            continue;
        }
        
        printaVetor(vetorTemp, n);
    }while(1);
    
    return 0;
}
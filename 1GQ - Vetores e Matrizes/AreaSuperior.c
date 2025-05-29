#include <stdio.h>
#include <stdlib.h>

int main(){
    char O;
    scanf(" %c", &O);

    double sum = 0.0;
    int elements = 0;
    double **m = (double **)malloc(sizeof(double *) * 12);
    for(int i = 0; i < 12; i++){
        double *v = (double *)malloc(sizeof(double) * 12);
        *(m + i) = v;
        for(int j = 0; j < 12; j++){
            scanf("%lf", *(v + j));
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 1; j < 11; j++){
            if(j > i && j < 11 - i){
                sum += *(*(m + i) + j);
                elements++;
            }
        }
    }

    if(O == 'S'){
        printf("%.1lf\n", sum);
    }else{
        printf("%.1lf\n", sum/elements);
    }
    return 0;

}
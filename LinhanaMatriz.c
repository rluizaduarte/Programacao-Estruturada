#include <stdio.h>
#include <stdlib.h>

int main()
{
    int L;
    scanf("%d", &L);
    getchar();
    char T;
    scanf("%c", &T);
    
    float m[12][12];
    float sum = 0.0;
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%f", &m[i][j]);
            if(i == L){
                sum += m[i][j];
            }
        }
    }
    
    if(T == 'S'){
        printf("%.1f\n", sum);
    }else{
        printf("%.1f\n", sum/12.0);
    }
    
    return 0;
}
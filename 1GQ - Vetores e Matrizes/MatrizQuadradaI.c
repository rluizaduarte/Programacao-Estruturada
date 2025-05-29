#include <stdio.h>

int min(int a, int b){
    if (a < b){
        return a;
    }else{
        return b;
    }
}
 
int main(){
    int n;
    while (scanf("%d", &n) && n != 0){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                int m = min(min(i, n - 1 - i), min(j, n - 1 - j)) + 1;
                if(j == 0){
                    printf("%3d", m);
                }else{
                    printf(" %3d", m);
                }
            }
            printf("\n");   
        }
        printf("\n");
    }
 
    return 0;
}

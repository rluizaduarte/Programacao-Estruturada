#include <stdio.h>
 
int main() {

    int T;
    scanf("%d", &T);
    
    if(T >= 2 && T <= 50){
        for(int i = 0; i < 1000; i++){
        printf("N[%d] = %d\n", i, i%T);
        }
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main() {
   int rows, col;
   scanf("%d%d", &rows, &col);
   int ** m = (int**) malloc(sizeof(int*) * rows);
   for(int i = 0; i < rows; i++){
       *(m + i) = (int*) malloc(sizeof(int) * col);
       for(int j = 0; j < col; j++){
           scanf("%d", &m[i][j]);
       }
   }

   int leftMost = -1;
   int isLadder = 1;
   for(int i = 0; i < rows; i++){
       int currentLeftMost = -1;
       for(int j = 0; j < col; j++){
           if(m[i][j] != 0) {
               currentLeftMost = j;
               break;
           }
       }
       if(currentLeftMost == -1){
           for(int k = i + 1; k < rows; k++){
               for(int j = 0; j < col; j++){
                   if(m[k][j] != 0){
                       isLadder = 0;
                       break;
                   }
               }
               if(!isLadder){
                       break;
               }
           }
       }else{
           if(currentLeftMost <= leftMost){
               isLadder = 0;
           }
           leftMost = currentLeftMost;
       }
       if(!isLadder)break;
   }
   printf(isLadder ? "S\n" : "N\n");
   return 0;
}


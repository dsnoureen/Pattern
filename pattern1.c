#include <stdio.h>
int main(){
    /*
    1
    1 2
    1 2 3
    1 2 3 4
    */
   int n,row,col;
   for(int row=0;row<n;row++){
    for(int col=0;col<=row;col++){
        printf("%d ",col);
    }
    printf("\n");
   }
    return 0;
}
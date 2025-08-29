#include <stdio.h>
int main(){
    /*
    * * * * *
    * * * *
    * * * 
    * *
    * 
    
    */
   int n, row, col;
    scanf("%d", &n);
    for (int row = n; row >=1; row--)
    {
        for (int col = 1; col<=row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
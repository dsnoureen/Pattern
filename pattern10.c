#include <stdio.h>
int main(){
    /*
         *
        ***
       *****
      *******
   ------- Reverse of this --------
    */
   int n, row, col;
    scanf("%d", &n);
    for (int row = n; row>=1; row--)
    {
        for (int col = 1; col<=n-row; col++)
        {
            printf(" ");
        }
        for (int col = 1; col<=((row*2)-1); col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
int main(){
    /*
     10101
      1010
       101
        10
         1
    */
   int n, row, col;
    scanf("%d", &n);
    for (int row = n; row>=1; row--)
    {
        for (int col = 1; col<=n-row; col++)
        {
            printf(" ");
        }
        for (int col = 1; col<=row; col++)
        {
            printf("%d",col%2);
        }
        printf("\n");
    }
    return 0;
}
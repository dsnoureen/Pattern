#include <stdio.h>
int main(){
    /*
        1
       10
      101
     1010
    10101

    */
   int n, row, col;
    scanf("%d", &n);
    for (int row = 1; row<=n; row++)
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
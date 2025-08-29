#include <stdio.h>
int main(){
    /*
        1
       121
      12321  
     1234321

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
                printf("%d",col);
        }
        for (int col = row-1; col>=1; col--)
        {
                printf("%d",col);
        }
        printf("\n");
    }
    // for (int row = 1; row<=n; row++)
    // {
    //     for (int col = row; col>=1; col--)
    //     {
    //             printf("%d",col);
    //     }
    //     printf("\n");
    // }
    return 0;
}
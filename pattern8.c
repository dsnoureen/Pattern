#include <stdio.h>
int main(){
    /*
     1
     2 4
     3 6 9
     4 8 12 16
    */
   int n, row, col;
    scanf("%d", &n);
    for (int row = 1; row<=n; row++)
    {
        for (int col = 1; col<=row; col++)
        {
            printf("%d ",row*col);
        }
        printf("\n");
    }
    return 0;
}
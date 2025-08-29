#include <stdio.h>
int main(){
    /*
    1
    2 2
    3 3 3
    4 4 4 4
    */
   int n, row, col;
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d ", row);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
int main(){
    /*
    A
    B B
    C C C
    D D D D
    */
   int n, row, col;
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%c ", row+64);
        }
        printf("\n");
    }
    return 0;
}
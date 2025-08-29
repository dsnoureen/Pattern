#include <stdio.h>
int main(){
    /*
    A
    A B
    A B C
    A B C D
    */
   int n, row, col;
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%c ", col+64);
        }
        printf("\n");
    }
    return 0;
}
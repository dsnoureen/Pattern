#include <stdio.h>
int main()
{
    /*
    1
    1 2
    1 2 3
    1 2 3 4
    */
    int n, row, col;
    scanf("%d", &n);
    for (int row = 1; row < n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
    return 0;
}
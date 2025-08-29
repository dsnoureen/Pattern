#include <stdio.h>
int main()
{
    /*
    1
    2 3
    4 5 6
    7 8 9 10

    */
    int n, row, col,count=0;
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            count++;
            printf("%d ",count);
        }

        printf("\n");
    }
    return 0;
}
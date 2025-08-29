#include <stdio.h>
int main()
{
    int n, row, col;
    scanf("%d", &n);
    int height = n + 5;                
    int width = (height * 2) - 1;  
    for (row = 1; row <= height; row++)
    {
        int stars = (2 * row) - 1;
        int spaces = (width - stars) / 2;

        for (col = 1; col <= spaces; col++)
        {
            printf(" ");
        }
        for (col = 1; col <= stars; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (row = 1; row <= 5; row++)
    {
        int spaces = (width - n) / 2;

        for (col = 1; col <= spaces; col++)
        {
            printf(" ");
        }
        for (col = 1; col <= n; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

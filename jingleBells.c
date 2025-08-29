#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int height = N + 5;            // total rows for top
    int max_width = (height * 2) - 1;  // maximum stars in the last row

    // Print tree top
    for (int i = 1; i <= height; i++) {
        int stars = (2 * i) - 1;     // odd numbers: 1,3,5,...
        int spaces = (max_width - stars) / 2;
        
        for (int j = 0; j < spaces; j++) printf(" ");
        for (int j = 0; j < stars; j++) printf("*");
        printf("\n");
    }

    // Print trunk
    for (int i = 0; i < 5; i++) {
        int spaces = (max_width - N) / 2;
        for (int j = 0; j < spaces; j++) printf(" ");
        for (int j = 0; j < N; j++) printf("*");
        printf("\n");
    }

    return 0;
}

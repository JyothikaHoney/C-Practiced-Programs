#include <stdio.h>

int main() {
    int i, j;

    // Letter 'H'
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if (j == 1 || j == 5 || i == 3) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("  ");
    }

    printf("\n");

    // Letter 'O'
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if ((i == 1 || i == 5) && (j == 1 || j == 5)) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("  ");
    }

    printf("\n");

    // Letter 'N'
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if (j == 1 || j == 5 || i == j) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("  ");
    }

    printf("\n");

    // Letter 'E'
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if ((i == 1 || i == 3 || i == 5) || (j == 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("  ");
    }

    printf("\n");

    // Letter 'Y'
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if ((i <= 3 && i == j) || (i > 3 && j == 1 && i <= 5) || (i > 3 && j == 5 && i <= 5)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("  ");
    }

    printf("\n");

    return 0;
}

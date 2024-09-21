#include <stdio.h>

int main(void) {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%d x %d = %d\t", (3 * i) + k + 1, j + 1, ((3 * i) + k + 1) * (j + 1));
            }
            printf("\n");
        }
        printf("\n\n");
    }
    return 0;
}
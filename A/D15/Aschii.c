#include <stdio.h>

int main()
{
    int i, j;

    printf("ASCII chart:\n");
    for (i = 0; i <= 127; i += 25)
    {
        printf("Press any key to see the next page...\n");
        getchar();
        printf("\n");
        for (j = i; j < i + 25 && j <= 127; j++)
        {
            printf("%d: %c\t", j, j);
        }
        printf("\n");
    }

    return 0;
}
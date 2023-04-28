#include <stdio.h>
#include <ctype.h>

int main()
{
    char name[100];
    int freq[26] = {0};
    int i, index;

    printf("Enter full name: ");
    fgets(name, 100, stdin);

    for (i = 0; name[i] != '\0'; i++)
    {
        if (isalpha(name[i]))
        {
            index = toupper(name[i]) - 'A';
            freq[index]++;
        }
    }

    printf("Frequency of characters in the name:\n");
    for (i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            printf("%c: %d\n", 'A' + i, freq[i]);
        }
    }

    return 0;
}
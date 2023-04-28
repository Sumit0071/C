#include <stdio.h>
int main()
{
    char name[100];
    int length = 0;
    printf("Enter the name:\n");
    fgets(name, 100, stdin);
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] != ' ' && name[i] != '\n')
        {
            length++;
        }
    }
    printf("The length of the name is %d\n", length);
    return 0;
}
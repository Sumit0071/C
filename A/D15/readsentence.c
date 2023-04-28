#include <stdio.h>
#include <ctype.h>

int main()
{
    char sentence[1000];
    int i, vowels, consonants, digits, spaces, words;

    printf("Enter a sentence: ");
    fgets(sentence, 1000, stdin);

    i = vowels = consonants = digits = spaces = words = 0;

    while (sentence[i] != '\0')
    {
        if (isalpha(sentence[i]))
        {
            if (tolower(sentence[i]) == 'a' || tolower(sentence[i]) == 'e' ||
                tolower(sentence[i]) == 'i' || tolower(sentence[i]) == 'o' ||
                tolower(sentence[i]) == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        else if (isdigit(sentence[i]))
        {
            digits++;
        }
        else if (isspace(sentence[i]))
        {
            spaces++;
        }

        i++;

        if (isspace(sentence[i - 1]) && !isspace(sentence[i]))
        {
            words++;
        }
    }

    printf("Number of words: %d\n", words);
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    printf("Number of digits: %d\n", digits);
    printf("Number of spaces: %d\n", spaces);

    return 0;
}
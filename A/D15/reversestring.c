#include <stdio.h>

int main() {
    char str[100], rev_str[100];
    int i, j, length = 0, palindrome = 1;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string from user
    
    // find length of the string
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }
    
    // reverse the string
    for (i = length - 1, j = 0; i >= 0; i--, j++) {
        rev_str[j] = str[i];
    }
    rev_str[j] = '\0'; // add null character at the end of the reversed string
    
    // compare the original and reversed string to check if they are equal
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != rev_str[i]) {
            palindrome = 0;
            break;
        }
    }
    
    if (palindrome == 1) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    
    printf("Reversed string: %s\n", rev_str);
    
    return 0;
}

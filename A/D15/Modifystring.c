#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "GOOD MORNING";
    char str2[] = " MORNING GOOD";
    char new_str[100];
    
    printf("Original string: %s\n", str1);
    
    // concatenate str1, str2, and str1 again in the desired format
    strcpy(new_str, str1);
    strcat(new_str, str2);
    strcat(new_str, str1);
    
    printf("Modified string: %s\n", new_str);
    
    return 0;
}

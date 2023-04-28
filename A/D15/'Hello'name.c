#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    char first_name[20];
    char last_name[20];
    
    printf("Enter your full name: ");
    scanf("%[^\n]", name); // read the entire line until a newline character is encountered
    
    // greet the person with "Hello"
    printf("Hello %s\n", name);
    
    // extract the first name from the full name
    sscanf(name, "%s", first_name);
    // greet the person with "Hello" and her first name
    printf("Hello %s\n", first_name);
    
    // extract the last name from the full name
    int len = strlen(name);
    int i;
    for (i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            strncpy(last_name, name + i + 1, 20); // copy the last name into a separate buffer
            break;
        }
    }
    // greet the person with "Hello" and her last name
    printf("Hello Ms. %s\n", last_name);
    
    return 0;
}

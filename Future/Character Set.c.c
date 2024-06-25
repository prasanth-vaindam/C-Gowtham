#include <stdio.h>

int main() {
    // Using letters, digits, and special characters in variable names and strings
    int age = 25;
    float height = 5.9;
    char initial = 'A'; // this is character
    char greeting[] = "Hello, World!";//this is sequence of characters a.k.a strings

    // Printing values
    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Initial: %c\n", initial);
    printf("Greeting: %s\n", greeting);

    // Using escape sequences
    printf("Newline example:\n"); 
    printf("Tab example:\t Jai Hind!\n");
    printf("Backslash example: \\\n");
    printf("Quote example: Namaste \"Bharat\"\n");

    return 0;
}


#include <stdio.h>
#include <stdbool.h>  // Include for boolean type

int main() {
    // Integer Literals
    int decimal = 123;
    int octal = 0173;       // Octal (equivalent to decimal 123)
    int hexadecimal = 0x7B; // Hexadecimal (equivalent to decimal 123)
    
    // Floating-Point Literals
    float float_num = 123.45f;
    double scientific = 1.23e2; // 1.23 * 10^2
    
    // Character Literals
    char character = 'A';
    char newline = '\n';  // Newline character
    
    // String Literals
    char string[] = "Hello, World!";
    
    // Boolean Literals
    bool true_value = true;
    bool false_value = false;
    
    // Print values
    printf("Integer Literals:\n");
    printf("Decimal: %d\n", decimal);
    printf("Octal: %o (in decimal: %d)\n", octal, octal);
    printf("Hexadecimal: %x (in decimal: %d)\n", hexadecimal, hexadecimal);
    
    printf("\nFloating-Point Literals:\n");
    printf("Float: %f\n", float_num);
    printf("Scientific: %f\n", scientific);
    
    printf("\nCharacter Literals:\n");
    printf("Character: %c\n", character);
    printf("Newline character: This is a newline ->%c<- See?\n", newline);
    
    printf("\nString Literals:\n");
    printf("String: %s\n", string);
    
    printf("\nBoolean Literals:\n");
    printf("True: %s\n", true_value ? "true" : "false");
    printf("False: %s\n", false_value ? "true" : "false");
    
    return 0;
}


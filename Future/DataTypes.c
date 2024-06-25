#include <stdio.h>
#include <stdbool.h>  // Include for boolean type

int main() {
    // Integer
    int myInt = 10;
    
    // Floating point number
    float myFloat = 3.14f;
    
    // Double precision floating point number
    double myDouble = 3.141592653589793;
    
    // Character
    char myChar = 'A';
    
    // Boolean
    bool myBool = true;
    
    // Print the values
    printf("Integer value: %d\n", myInt);
    printf("Float value: %f\n", myFloat);
    printf("Double value: %lf\n", myDouble);
    printf("Double value up to 15 digit precision: %.15lf\n", myDouble);
    printf("%d * %d = %d\n",5, 1,5*1);
	printf("%d * %d = %d\n",5, 10,5*10);
    
    printf("Character value: %c\n", myChar);
    printf("Boolean value: %s\n", myBool ? "true" : "false");
    
    return 0;
}


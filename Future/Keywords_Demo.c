#include <stdio.h>   // Include standard input/output library

#define PI 3.14159   // Define a constant

int main() {
    // Declaration of variables
    int a = 10;         // int keyword for integer type
    float b = 5.5;      // float keyword for floating-point type
    double c = 7.77;    // double keyword for double-precision floating-point type
    char d = 'X';       // char keyword for character type
    
    // Control flow statements
    if (a > 5) {        // if keyword for conditional statement
        printf("a is greater than 5\n");
    } else {            // else keyword for alternate condition
        printf("a is not greater than 5\n");
    }
    
    // Loop example
    for (int i = 0; i < 5; i++) {   // for keyword for loop
        printf("i = %d\n", i);
    }
    
    // Switch-case example
    switch (d) {       // switch keyword for switch-case control flow
        case 'X':      // case keyword for case label
            printf("d is X\n");
            break;     // break keyword to exit the case
        default:       // default keyword for default case
            printf("d is not X\n");
    }
    
    // Demonstrating the use of while loop
    int count = 0;
    while (count < 3) {   // while keyword for while loop
        printf("count = %d\n", count);
        count++;
    }

    // do-while loop example
    int j = 0;
    do {                  // do keyword for do-while loop
        printf("j = %d\n", j);
        j++;
    } while (j < 3);      // while keyword for condition in do-while loop

    // Continue and break in a loop
    for (int k = 0; k < 5; k++) {
        if (k == 2) {
            continue;     // continue keyword to skip the current iteration
        }
        if (k == 4) {
            break;        // break keyword to exit the loop
        }
        printf("k = %d\n", k);
    }

    // Return statement
    return 0;            // return keyword to return from the function
}


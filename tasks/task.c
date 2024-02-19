#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Add 2 number after ./task1 when execute because it'll save as array
// ex: ./task1 <num1> <num2>

int main(int argc, char *argv[]) {
    
    // appropiate validation
    if (argc != 3){

        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 0;
    }
    
    // function sum
    int num1, num2, sum;
    // convert string into int because argv[] is always string since its an array
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    sum = num1 + num2;
    // printf the result
    printf("Sum of %s and %s is = %d\n", argv[1], argv[2], sum);
    return 0; // Exit successfully

    // int num1, num2;

    // // Prompt the user for input
    // printf("Enter the first number: ");
    // scanf("%d", &num1);

    // printf("Enter the second number: ");
    // scanf("%d", &num2);

    // // Calculate and print the sum
    // int sum = num1 + num2;
    // printf("Sum: %d\n", sum); 
}

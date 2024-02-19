#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    
    if (argc != 3){

        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 0;
    }
    
    int num1, num2, sum;
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    sum = num1 + num2;
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

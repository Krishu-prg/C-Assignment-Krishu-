#include <stdio.h>  // Include standard input/output library

int main() {
    int num1, num2, sum;  // Declare variables to store numbers and their sum

    // Ask the user to enter the first number
    printf("Enter the first number: ");
    scanf("%d", &num1);  // Read the first number from user input

    // Ask the user to enter the second number
    printf("Enter the second number: ");
    scanf("%d", &num2);  // Read the second number from user input

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    // Display the sum
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;  // Return 0 to indicate that the program executed successfully
}

/* Implementing a basic arithmetic calculator */

#include <stdio.h>

int main() {
    int choice, num1, num2;
    float result;

    /* TODO: display the menu of options and take user input, perform the chosen operation and display result.
             your program should continue until the user chooses to exit. 
             format your print statements exactly as the ones shown in sample output in the pdf */
    while (choice != 6){
        printf("Press 1 for addition (+)\nPress 2 for subtraction (-)\nPress 3 for multiplication (*)\nPress 4 for division (/)\nPress 5 for modulus (%%)\nPress 6 for exit\nPlease enter your choice (1-6): ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter two integers: ");
                scanf("%d %d", &num1, &num2);
                result = num1 + num2;
                printf("Result: %d + %d = %.2f\n", num1, num2, result);
                break;
            case 2:
                printf("Enter two integers: ");
                scanf("%d %d", &num1, &num2);
                result = num1 - num2;
                printf("Result: %d - %d = %.2f\n", num1, num2, result);
                break;
            case 3:
                printf("Enter two integers: ");
                scanf("%d %d", &num1, &num2);
                result = num1 * num2;
                printf("Result: %d * %d = %.2f\n", num1, num2, result);
                break;
            case 4:
                printf("Enter two integers: ");
                scanf("%d %d", &num1, &num2);
                if (num2 != 0) {
                    result = (float)num1 / num2;
                    printf("Result: %d / %d = %.2f\n", num1, num2, result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case 5:
                printf("Enter two integers: ");
                scanf("%d %d", &num1, &num2);
                if (num2 != 0) {
                    result = num1 % num2;
                    printf("Result: %d %% %d = %.2f\n", num1, num2, result);
                } else {
                    printf("Error: Modulus by zero is not allowed.\n");
                }
                break;
            case 6:
                printf("Exiting the program. Thank you!\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 6.\n");
        }
    }
  
    return 0;
}


// Design a  calculator in C language to perform multiple operations. https://www..skytup.com
// Programmed By Akash Vishwakarma
// For Turbo C

#include <stdio.h>
#include <conio.h>
#include <math.h>

void homeMenu()
{
    printf("\n===== Sky Calculator Menu =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Power\n");
    printf("7. Square Root\n");
    printf("8. Exit The Calculator\n");
    printf("Enter your choice: ");
}

int main()
{
    int choice;
    double num1, num2, result;
    int intNum1, intNum2;
    // clrscr(); // For Turbo C Compiler
    while("skytup")
    {
        homeMenu();
        scanf("%d", &choice);

        if (choice == 8)
        {
            printf("Bye Bye !\n");
            break;
        }

        switch (choice)
        {
        case 1: // Addition
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;

        case 2: // Subtraction
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;

        case 3: // Multiplication
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;

        case 4: // Division
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if (num2 == 0)
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            else
            {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            }
            break;

        case 5: // Modulus
            printf("Enter two integers: ");
            scanf("%d %d", &intNum1, &intNum2);
            if (intNum2 == 0)
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            else
            {
                result = intNum1 % intNum2;
                printf("Result: %.0lf\n", result);
            }
            break;

        case 6: // Power
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &num1, &num2);
            result = pow(num1, num2);
            printf("Result: %.2lf\n", result);
            break;

        case 7: // Square Root
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if (num1 < 0)
            {
                printf("Only +ve Number Allowd \n");
            }
            else
            {
                result = sqrt(num1);
                printf("Result: %.2lf\n", result);
            }
            break;

        default:
            printf("Invalid choice. Select Again.\n");
        }
    }
    // getch(); // For Turbo C Compiler
    return 0;
}

#include <stdio.h>

void calculator(int num1, int num2, int opt)
{
    switch (opt)
    {
    case 1:
        printf("The Addition of  %d and %d is: %d\n", num1, num2, num1 + num2);
        break;

    case 2:
        printf("The Substraction of %d  and %d is: %d\n", num1, num2, num1 - num2);
        break;

    case 3:
        printf("Thank you for using!");
        break;

    default:
        printf("Invalid option!!\n");
        break;
    }
}

int main()
{
    int num1, num2, opt;
    printf("Enter the first Integer :");
    scanf("%d", &num1);
    printf("Enter the second Integer :");
    scanf("%d", &num2);

    printf("\nInput your option :\n");
    printf("1-Addition.\n2-Substraction.\n3-Exit.\n");
    scanf("%d", &opt);
    calculator(num1, num2, opt);
    return 0;
}

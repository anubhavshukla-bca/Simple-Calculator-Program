#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b, result;
    char operator;

    printf("enter first number: ");
    scanf("%d", &a);
    printf("enter second number: ");
    scanf("%d", &b);
    printf("enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch(operator)
    {
        case '+':
            result = a + b;
            printf("%d", result);
            break;
        case '-':
            result = a - b;
            printf("%d", result);
            break;
        case '*':
            result = a * b;
            printf("%d", result);
            break;
        case '/':
            result = a / b;
            printf("%d", result);
            break;
        default:
            printf("invalid operator");
    }
    getch();
}

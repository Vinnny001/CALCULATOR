#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;
    printf("\t\t\t*****************CALCULATOR*****************\n\t\t\t*\n\t\t\t*");
           printf("  Enter first number:                     *\n\t\t\t*  ");
    scanf("%f", &num1);

    printf("\t\t\t*  Enter an operator (+, -, *, /):         *\n\t\t\t*  ");
    scanf(" %c", &operator);

    printf("\t\t\t*  Enter second number:                    *\n\t\t\t*  ");
    //printf("\t\t\t");
    scanf("%f", &num2);
    printf("\t\t\t*                                          *\n\t\t\t********************************************\n\t\t\t*  ");
    //printf("\t\t\t*                                          *\n\t\t\t*  ");
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.0f", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.0f", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.4f", result);
            break;
        case '/':
            if(num2!=0){
           result= num1/num2;
           printf("Result: %f", result);
            }
            else{
                printf("Math Error");
            }
            break;
        default:
            printf("Error: Invalid operator!");
            break;
    }
    printf("                *\n\t\t\t********************************************");

    return 0;
}
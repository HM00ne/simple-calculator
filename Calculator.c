#include <stdio.h>
 
int main(void) {
    double a, b, result;
    char op, again = 'y';

    while (again == 'y' || again == 'Y') {
        printf("\nEnter Equation ('+' '-' '*' '/'): ");

        if (scanf("%lf %c %lf", &a, &op, &b) != 3) {
            printf("Invalid input. Use: number operator number\n");
            int c;
            while ((c = getchar()) != '\n' && c != EOF) { }
            if (c == EOF) break;
            continue;
        }
 
        switch (op) {
            case '+': result = a + b; break;
            case '-': result = a - b; break;
            case '*': result = a * b; break;
            case '/':
                if (b == 0) {
                    printf("Error: division by zero.\n");
                    goto ask_again;
                }
                result = a / b;
                break;
            default:
                printf("Unknown operator '%c'.\n", op);
                goto ask_again;
        }
 
        printf("\n%g %c %g = %.2f\n", a, op, b, result);
    ask_again:
        printf("\nAgain? (y/n): ");
        if (scanf(" %c", &again) != 1) break;
    }
return 0;
}
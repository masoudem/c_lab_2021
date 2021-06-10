/*
* Project name: calculator
--------------------------------------------
    ID:9931001
    Name:معین احمدیه
    Mail:moeinahmadiehlol@gmail.com
--------------------------------------------

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2;              // input values
    char op, cc;                        // operator
    double result;                  // output

    printf("Choose operation to perform (+, -, *, /, %%, sin, cos, tan): ");
    scanf("%c", &op);

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num2 - num1;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("invalid input! divide by zero");
                return -1;
            } else {
                result = num1 / num2;
            }
            break;
        case '%':
            if ((num1 - (int) num1 == 0) && (num2 - (int) num2) == 0) {
                result = (int) num1 % (int) num2;
            } else {
                printf("incorrect input");
                return 0;
            }
            break;
        case 's':
            result = sin(num1 / num2);
            break;
        case 'c':
            result = cos(num1 / num2);
            break;
        case 't':
            result = tan(num1 / num2);
            break;
        case 'b': {
            char cc;
            double sin = 2, cos;
            while (sin > 1 || sin < -1) {
                printf("sin?\n");
                scanf("%lf", &sin);
            }
            scanf("%c", &cc); //only for Enter char
            while (cc != '+' && cc != '-') {
                printf("cos is + or -?\n");
                scanf("%c", &cc);
            }
            switch (cc) {
                case '+':
                    cos = sqrt(1 - pow(sin, 2));
                    printf("cos = %lf\n", cos);
                    if (sin == 0 || cos == 0) {
                        printf("Border");
                    } else if (sin > 0) {
                        printf("First");
                    } else {
                        printf("Fourth");
                    }
                    break;

                case '-':
                    cos = -sqrt(1 - pow(sin, 2));
                    printf("cos = %lf\n", cos);
                    if (sin == 0 || cos == 0) {
                        printf("Border");
                    } else if (sin > 0) {
                        printf("Second");
                    } else {
                        printf("Third");
                    }
                    break;
            }
            break;
        }
    }
            switch (op) {
                case 's':
                    printf("result : sin(%lf/%lf) = %lf", num1, num2, result);
                    break;
                case 'c':
                    printf("result : cos(%lf/%lf) = %lf", num1, num2, result);
                    break;
                case 't':
                    printf("result : tan(%lf/%lf) = %lf", num1, num2, result);
                    break;
                case '%':
                    printf("result : %.lf %% %.lf = %.lf", num1, num2, result);
                    break;
                default:
                    printf("result : %lf %c %lf = %lf", num1, op, num2, result);
                    break;
            }
            return 0;

}

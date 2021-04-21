/*
* Project name: calculator
--------------------------------------------
    ID:123456
    Name:
    Mail:
--------------------------------------------
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2;              // input values
    char op;                        // operator
    double result;                  // output

    printf("Choose operation to perform (+, -, *, /, %%, sin, cos, tan): ");
    scanf("%c", &op);

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    // do the operation
    if(op == '+') {
        // the part that calculates the sum of two numbers
        result = num1 + num2;
    }
    else if(op == '-') {
        // the part that calculates the difference of two numbers
        result = num1 - num2;
    }
    else if(op == '*') {
        // the part that calculates the product of two numbers
        result = num1 * num2;
    }
    else if(op == '/') {
        // the part that calculates the division of two numbers
        // if denominator equals to zero exit the program
        if(num2 == 0) {
            printf("invalid input! divide by zero");
            return -1;
        }
        else {
            result = num1 / num2;
        }
    }
    else if(op == '%') {
        // the part that calculates the remainder of a number over another number
        if ((num1 - (int)num1 == 0) && (num2 - (int)num2) == 0) {
            result = (int)num1 % (int)num2;
        }
        else {
            printf("incorrect input");
            return 0;
        }
    }
    else if(op == 's') {
        // the part that calculates sine of an angle
        result = sin(num1 / num2);
    }
    else if(op == 'c') {
        //the part that calculates the cosine of an angle
        result = cos(num1 / num2);
    }
    else if(op == 't') {
        // the part that calculates the tangent of an angle
        result = tan(num1 / num2);
    }

    // print result
    if(op == 's') {
        printf("result : sin(%lf/%lf) = %lf", num1, num2, result);
    }
    else if(op == 'c') {
        printf("result : cos(%lf/%lf) = %lf", num1, num2, result);
    }
    else if(op == 't') {
        printf("result : tan(%lf/%lf) = %lf", num1, num2, result);
    }
    else if(op == '%') {
        printf("result : %.lf %% %.lf = %.lf", num1, num2, result);
    }
    else {
        printf("result : %lf %c %lf = %lf", num1, op, num2, result);
    }

    return 0;
}

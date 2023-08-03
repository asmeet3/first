#include <stdio.h>

void calculate(int num1, int num2) {
    int product, sum, diff;
    float division;
    product = num1 * num2;
    division = (float)num1 / num2;
    sum = num1 + num2;
    diff = num1 - num2;
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", product);
    printf("Division = %.2f\n", division);
}

int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    calculate(num1, num2);
    return 0;
}

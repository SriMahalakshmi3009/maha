
#include <stdio.h>

int main() {
    int a, b, sum,sub,mul,div;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum: %d", sum);
    sub = a - b;
    printf("Sub: %d", sub);
    mul = a * b;
    printf("mul: %d", mul);
    div = a / b;
    printf("div: %d", div);
    return 0;
}
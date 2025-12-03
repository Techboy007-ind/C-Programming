#include <stdio.h>

struct complex {
    int real;
    int imaginary;
};

struct complex add(struct complex, struct complex);

int main() {
    struct complex n1, n2, res;

    printf("Enter num1 (real imaginary): ");
    scanf("%d %d", &n1.real, &n1.imaginary);

    printf("Enter num2 (real imaginary): ");
    scanf("%d %d", &n2.real, &n2.imaginary);

    res = add(n1, n2);

    printf("Result = %d + %di\n", res.real, res.imaginary);

    return 0;
}

struct complex add(struct complex num1, struct complex num2) {
    struct complex temp;
    temp.real = num1.real + num2.real;
    temp.imaginary = num1.imaginary + num2.imaginary;
    return temp;
}



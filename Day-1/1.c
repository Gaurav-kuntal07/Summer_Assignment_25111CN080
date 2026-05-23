// wap to calculate the sum of first n natural numbers

#include <stdio.h>

int main() {
    int n, sum;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    sum = n * (n + 1) / 2;

    printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    return 0;
}


// wap to print multiplication table of a given number

#include <stdio.h>

int main() {
    int num, i;
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    printf("Multiplication Table of %d:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}


// wap to find factorial of a given number

#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }
    return 0;
}


// wap to count digits in a number

#include <stdio.h>

int main() {
    long long n;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    if (n < 0) n = -n;

    do {
        n /= 10;
        ++count;
    } while (n != 0);

    printf("Number of digits: %d", count);
    return 0;
}


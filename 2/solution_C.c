#include <stdio.h>

int fib(int n);
int even_fib(int);

int main(void)
{
    printf("The solution is %d\n", even_fib(4000000));
    return 0;
}

int fib(int n)
{
    int fib0 = 0;
    int fib1 = 1;
    int i;
    int temp = 0;
    for (i = 0; i < n; i++) {
        temp = fib1;
        fib1 = fib0 + fib1;
        fib0 = temp;
    }
    return fib1;
}

int even_fib(int n) 
{
    int i;
    int fib_number = 0;
    int sum = 0;
    for (i = 1; i < n; i++) {
        if ((fib_number = fib(i)) % 2 == 0)
            sum += fib_number;
    }
    return sum;
}
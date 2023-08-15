#include <stdio.h>
#include <time.h>

unsigned long long factorial(int);

int main()
{
    int num;
    unsigned long long facto;
    clock_t time;

    scanf("%d", &num);

    time = clock();
    facto = factorial(num);
    time = clock() - time;

    double time_taken = ((double)time) / CLOCKS_PER_SEC;

    printf("Factorial of %d is: %llu\n", num, facto);
    printf("Elapse time: %f", time_taken);

    return 0;
}

unsigned long long factorial(int num)
{
    if (num == 0 || num == 1)
        return 1;
    return (num * factorial(num - 1));
}
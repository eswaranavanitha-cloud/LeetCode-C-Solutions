#include <stdio.h>

int main()
{
    int n, digit;
    int product = 1;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        digit = n % 10;

        product = product * digit;
        sum = sum + digit;

        n = n / 10;
    }

    printf("Result = %d\n", product - sum);

    return 0;
}
#include <stdio.h>

int main()
{
    int n, ones, hundreds;
    printf("Enter : ");
    scanf("%d", &n);
    ones = n % 10;
    hundreds = n / 100;
    n = n - (ones % 2) * (hundreds % 2) * 5;
    printf("%d", n);
    return 0;
}

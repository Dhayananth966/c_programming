#include <stdio.h>

int main()
{
    int n, sum;
    printf("Enter: ");
    scanf("%d", &n);
    sum = (n / 100) + (n / 10) % 10 + (n % 10);
    while (sum >= 10)
    {
        sum = (sum / 10) + (sum % 10);
    }
    printf("%d", sum);
    return 0;
}

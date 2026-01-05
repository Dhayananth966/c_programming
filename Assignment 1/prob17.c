
#include <stdio.h>

int main()
{
    int n, tens;

    printf("Enter: ");
    scanf("%d", &n);
    tens = (n / 10) % 10;
    n = n - (tens % 2) * 5;
    printf("%d", n);
    return 0;
}

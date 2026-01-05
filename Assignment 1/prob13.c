#include <stdio.h>

int main()
{
    int n, last, secondLast, firstPart, result;
    printf("Enter a 4-digit number: ");
    scanf("%d", &n);
    last = n % 10;
    secondLast = (n / 10) % 10;
    firstPart = n / 100;
    result = firstPart * 100 + last * 10 + secondLast;
    printf("Output: %d", result);
    return 0;
}

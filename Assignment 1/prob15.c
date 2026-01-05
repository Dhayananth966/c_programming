#include <stdio.h>
int main()
{
    int n, ones;
    printf("Enter:");
    scanf("%d", &n);
    ones = n % 10;
    n = 10 + ones;
    printf("Output: %d", n);
    return 0;
}

#include <stdio.h>

int main()
{
    int n;
    printf("Enter: ");
    scanf("%d", &n);
    n = (n / 10) * 10 + 2;
    printf("%d", n);
    return 0;
}

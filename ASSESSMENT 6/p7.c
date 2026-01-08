#include <stdio.h>

void disp_2digit_odd_sum7()
{
    int i, d1, d2;

    for (i = 11; i <= 99; i = i + 2)
    {
        d1 = i / 10;     
        d2 = i % 10;     

        if (d1 + d2 == 7)
        {
            printf("%d\n", i);
        }
    }
}

int main()
{
    disp_2digit_odd_sum7();
    return 0;
}
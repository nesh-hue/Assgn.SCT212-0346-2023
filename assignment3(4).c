#include <stdio.h>

int main(void)
{
    float a =0;

    while (a <=200 )

    {
        printf("%6.2f distance mi.=%6.2f distance km\n",
               a,(a)*1.609344);
        a=a+10;
    }
    return 0;
}

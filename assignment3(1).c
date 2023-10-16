#include <stdio.h>

int main(void)
{
    int a,b,c;
    {
        printf("Enter the first value:");
        scanf("%d",&a);
        printf("Enter the end value:");
        scanf("%d",&b);
        printf("Enter the increment value:");
        scanf("%d",&c);
        while(a<=100)
        {
            printf("%4d degrees F=%4d degrees C\n",
                   a,(a-32)*5/9);
                   a=a+c;
        }
    }
    return 0;
}

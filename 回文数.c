#include <stdio.h>

int main(void)
{
    int i, val;
    int sum = 0;

    printf("input a number:");
    scanf("%d", &i);
    val = i;
    while (i)
    {
        sum = sum * 10 + i % 10;
        i /= 10;
    }
    if (sum == val)
        printf("yes!\n");
    else
    {
        printf("no!");
    }
    
        return 0;
}
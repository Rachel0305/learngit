#include <stdio.h>

typedef int BOOL;

#define  true 1

#define false 0

BOOL isprime(int val)
{
    int i;

    for (i = 2; i < val; ++i)
    {
        if (val%i == 0)
            break;
    }
    if(i == val)
        return true;
    else
        return false;
}

int main(void)
{
    int m;

    scanf("%d", &m);
    if(isprime(m))
        printf("yes!\n");
    else
        printf("no!\n");

    return 0;
}
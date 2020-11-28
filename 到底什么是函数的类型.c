#include <stdio.h>

int f() 
{
    return 10;  //因为函数的返回值类型是int 所以最终f返回的是10而不是10.5
}

int main(void)
{
    int i = 99;

    i = f();
    printf("%d\n", i);
    return 0;
}
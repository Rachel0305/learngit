/* 用两个函数来实现求1到某个数字之间所有的素数，并将其输出
本程序 和 _1相比较
代码量更少，可重用性更高 */

#include <stdio.h>

//本函数的功能是：判断m是否为素数，是 返回true，否 返回false
typedef int BOOL;

#define  true 1

#define false 0

BOOL isprime(int m)
{
    int i;

    for (i = 2; i < m;++i)
    {
        if(m%i==0)
            break;
    }
    if(i==m)
        return true;
    else
        return false;
}

//本函数的功能是把1-n之间所有的素数在显示器上输出
void TraverseVal(int n)//遍历1-n
{
    int i;

    for (i = 2; i <= n;++i)
    {
        if(isprime(i))
            printf("%d\n", i);
    }
}

int main(void)
{
    int val, i;

    scanf("%d", &val);
    TraverseVal(val);

    return 0;
}
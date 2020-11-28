/* 若只用main函数实现，有局限性：
    1.代码的重用性不高
    2.代码不容易理解
    用一个韩素华来判断一个数字是否是素数
        优点：
            代码的可读性更易理解
        缺点：
            可重用性依然不是很高，
            若要求1000个数组，则判断程序需要写1000次 */

#include <stdio.h>

#include <stdio.h>

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

int main(void)
{
    int i, j, val;

    scanf("%d", &val);
    for (i = 2; i < val;++i)
    {
        if(isprime(i))
            printf("%d\n", i);
    }
    return 0;
} 


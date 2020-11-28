#include <stdio.h>

int main(void)
{
    int* p;//p是变量的名字，int*表示p变量存放的是int类型变量的地址
    int i = 3;

    p = &i;
    //p = i; error,因为类型不一致，p只能存放Int类型的变量的地址，不能存放整型变量
    p = 55;//原因同上
    return 0;
}
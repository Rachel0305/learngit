#include <stdio.h>
 int f(void)  //被调函数；括号中的void表示该函数不能接收数据 int表示函数返回值是int类型
 {
     return 10;//向主调函数返回10
 }

void g(void)//函数名前面的void表示该函数没有返回值
{
    //return 10；//error 因为g没有返回值，与第7行void矛盾
}
 int main(void)//主调函数
 {
     int j = 88;

     j = f();
     printf("%d\n", j);

     //j=g(); //error 因为g没有返回值

     return 0;
 }
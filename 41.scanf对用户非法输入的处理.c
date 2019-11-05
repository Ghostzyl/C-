#include<stdio.h>
int main(void)
{
    int i;
    char ch;

    scanf("%d", &i);
    printf("i = %d\n", i);
       //应该在此处把用户遗留的数据清除掉，用户输入错误时，下面的j没办法读取正确的数字
    while ( (ch=getchar()) !='\n')
        continue;
    int j;
    scanf("%d", &j);
    printf("j = %d\n", j);

    /*输入123m
结果是i = 123
           j = 8 j从m开始读的
    */
    return 0;
}

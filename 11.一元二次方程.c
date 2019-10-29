#include<stdio.h>
#include<math.h>//【错误点】
int main(void)
{
    //把三个系数保存到计算机中
    int a=1;
    int b=5;
    int c=6;
    double delta;//判别式，delta存放的是b*b-4*a*c
    double x1;
    double x2;
    delta=b*b-4*a*c;

    if(delta>0)
    {
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        printf("该一元二次方程有两个解，x1=%f,x2=%f\n",x1,x2);//两个解
    }
    else if(delta==0)
    {
        x1=(-b+sqrt(delta))/(2*a);
        x2=x1;//右边赋给左边
        printf("该一元二次方程有一个解，x1=%f,x2=%f\n",x1,x2);//一个解，【错误点】没分号
    }
    else
    {
       printf("无解\n"); //无解
    }
    return 0;
}

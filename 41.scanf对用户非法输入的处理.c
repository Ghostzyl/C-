#include<stdio.h>
int main(void)
{
    int i;
    char ch;

    scanf("%d", &i);
    printf("i = %d\n", i);
       //Ӧ���ڴ˴����û�������������������û��������ʱ�������jû�취��ȡ��ȷ������
    while ( (ch=getchar()) !='\n')
        continue;
    int j;
    scanf("%d", &j);
    printf("j = %d\n", j);

    /*����123m
�����i = 123
           j = 8 j��m��ʼ����
    */
    return 0;
}

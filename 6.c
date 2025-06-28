#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=0,b=0;
    char ch='0';
    printf("请输入两个数及运算符");
    scanf("%d,%d,%c",&a,&b,&ch);
    
    switch (ch)
    {
    case '+':
        printf("结果是：%d\n",a+b);
        break;
        case '/':
        printf("结果是：%d\n",a/b);
        break;
        case '-':
        printf("结果是：%d\n",a-b);
        break;
        case '*':
        printf("结果是：%d\n",a*b);
        break;
    
    default:
        break;
    }

    return 0;
}

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n=0 ,a=0;
    printf("请输入一个整数\n");
    scanf("%d",&n);
    for (int i = 0; n>0; i++)
    {
        n=n%10;
        a+=1;
    }
    
    printf("反向输出后为%d",n%10*10^a+n%10^(a-1)*10);
    return 0;
}

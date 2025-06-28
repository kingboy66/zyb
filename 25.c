#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n=0;
    printf("请输入一个整数\n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
    return 0;
}


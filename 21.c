#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n=0;
    printf("请输入一个整数\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}

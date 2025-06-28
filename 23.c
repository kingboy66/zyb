#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n=0;
    printf("请输入一个整数");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}

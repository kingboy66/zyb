#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n=0;
    int n1=1;
    int n2=1;

    printf("请输入一个数\n");
    scanf("%d",&n);
    printf("1 ");
    printf("1 ");
    for (int  i = 1; i <=n-2; i++)
    {
        int temp=n2;
        
        n2+=n1;
        n1=temp;
        printf("%d ",n2);


        
        
        
        
    }
    
    return 0;
}

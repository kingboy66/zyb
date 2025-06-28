#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n=0;
    int a=1;
    scanf("%d",&n);
     for (int i = 0;n>0; i++)
    {
        n=n%10;
        a+=1;
    }
    
        
    
    printf("该数是%d位数",a);
    

    return 0;
}

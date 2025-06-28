#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n=0;
    scanf("%d",&n);
    for (int i = 2; i <n; i++)
    {
        if (n%i==0)
        {
            printf("该数不是素数");
            return 0;
        }
       
        
    }
     
     printf("该数是素数");
           
           
        
    
    return 0;
}

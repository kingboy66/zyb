#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n=0;
    scanf("%d",&n);
    for (int i = 2; i < n; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            if (i%j==0)
            {
                break;
            }
            else{
                printf("%d ",i);
                break;
            }
            
        }
        
    }
    
    return 0;
}

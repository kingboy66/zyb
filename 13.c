#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=0,b=0;
    for (int i = 0; i <=100; i++)
    {
        if (i%2!=0)
        {
            a+=i;
        }
        if (i%2==0)
        {
            b+=i;
        }
        
        
    }
    printf("1-2+3-4...的值是%d\n",a-b);
    
    return 0;
}

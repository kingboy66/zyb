#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=0;
    for (int i = 0; i <=100; i++)
    {
        if (i/10==9)
        {
            a+=1;
            if (i%10==9)
            {
                a+=1;
            }
            
        }
        else if (i%10==9)
        {
            a+=1;
        }
        
        
    }
    printf("9一共出现了%d\n",a);
    
    return 0;
}

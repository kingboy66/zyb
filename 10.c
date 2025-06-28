#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=0;
    for (int i = 1; i <=100 ; i++)
    {
        if (i%2!=0)
        {
            a+=i;
        }
        
    }
    printf("奇数的值是%d\n",a);
    return 0;
}

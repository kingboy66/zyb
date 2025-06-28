#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=0;
    printf("请输入分数");
    scanf("%d",&a);

    if (a>=90&&a<=100)
    {
        printf("A");
    }
    
     
     else if (a>=80&&a<=89)
    {
        printf("B");
    }
      else if (a>=70&&a<=79)
    {
        printf("C");
    }
     else if (a>=60&&a<=69)
    {
        printf("D");
    }
    else  if (a<60)
    {
        printf("E");
    }
    
    return 0;
}

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n=0;
    int a=0;
    printf("请输入你要输入的值\n");
    scanf("%d",&n);
    for (int i = n-1; i >=0; i--)
    {
        a+=1;
       for (int j = 0; j <=i ; j++)
       {
          printf(" ");
          
       }
     for (int k = 1; k <= a; k++)
    {
        
            printf("%d",k);
        
        
    }if (i<=n-2)
   {
    
    for (int l = a-1; l>0 ; l--)
    {
        
        
        printf("%d",l);
    }
   }
      
       
      
       
       
       printf("\n");
       
    }
      
   
    
    return 0;
}

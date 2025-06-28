#include <stdio.h>
int main(int argc, char const *argv[])
{
    int  m=0;
    printf("请输入你在超市花了多少钱\n");
    scanf("%d",&m);
    if (m >50&& m<=79)
    {
        printf("送你一个");
    }
    else if (m>79)
    {
        printf("送你一辆模型");
    }
    
    else
    {
        printf("不好意思，请接着消费");

    }
    
    return 0;
}

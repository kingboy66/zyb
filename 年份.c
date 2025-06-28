/***********************************************************
  > File Name: d41.c
  > Author: YU
  > Mail: chen.minghua@nexuslink.cn
  > Created Time: 2025年06月26日 星期四 17时41分26秒
  > Modified Time:2025年06月26日 星期四 17时41分26秒
 *******************************************************/

#include <stdio.h>

int main(int argc,const char *argv[])
{
	int y=0,m=0,d=0,two=0;
	printf("请输入一个年月日");
	scanf("%d,%d,%d",&y,&m,&d);
	if((y%4==0&&y%100!=0)|| (y%400==0))
	{
		printf("该年份是闰年\n");
		two=1;
	}
		else{
			two=0;
		}	
	switch(m)
	{
		case 1:
		printf("这是一年中的第%d",d);
		break;
		case 2:
		
	
		printf("这是一年中的第%d",d+31+two);
		break;
		case 3:
		printf("这是一年中的第%d",d+28+31+two);
		break;
		case 4:
		printf("这是一年中的第%d",d+31+31+28+two);
		break;
		case 5:
		printf("这是一年中的第%d",d+31+31+30+28+two);
		break;
		case 6:
		printf("这是一年中的第%d",d+31+31+31+28+30+two);
		break;
		case 7:
		printf("这是一年中的第%d",d+31+31+31+28+30+30+two);
		break;
		case 8:
		printf("这是一年中的第%d",d+31+31+31+31+30+30+28+two);
		break;
		case 9:
		printf("这是一年中的第%d",d+31+31+31+31+31+30+30+28+two);
		break;
		case 10:
		printf("这是一年中的第%d",d+31+31+31+31+31+30+30+30+28+two);
		break;
		case 11:
		printf("这是一年中的第%d",d+31+31+31+31+31+31+30+30+30+28+two);
		break;
		case 12:
		printf("这是一年中的第%d",d+31+31+31+31+31+31+30+30+30+30+28+two);
		break;
	}
	
}


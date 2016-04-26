#include<stdio.h>
int main()
{
	int sec;
	printf("몇초? : ");
	scanf("%d", &sec);
	printf("%d시간 %d분 %d초\n", sec/3600, sec%3600/60, sec%3600%60);
	return 0;
}



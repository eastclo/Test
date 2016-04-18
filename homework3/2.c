#include<stdio.h>
void input(int*);
void output1(int);
void output2(int);
void main()
{
	int day;
	printf("며칠? :");
	input(&day);
	if (day>=7)
		output1(day);
	else 
		output2(day);
}
void input(int* day)
{
	scanf("%d",day);
}
void output1(int day)
{
		printf("%d주 %d일 입니다.\n",day/7,day%7);
}
void output2(int day)
{
		printf("%d일 입니다.\n",day);
}

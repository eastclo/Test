#include<stdio.h>
void input(int*);
void output(int);
void main()
{
	int num;
	printf("숫자를 입력하시오. : ");
	input(&num);
	output(num);
}
void input(int* num)
{
	scanf("%d",num);
}
void output(int num)
{
	printf("%d = %c\n",num,num);
}

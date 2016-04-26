#include<stdio.h>
void input(int*);
void output(int);	
void main()
{
	int integer;
	printf("정수를 입력하시오. : ");
	input(&integer);
	output(integer);
}
void input(int* integer)
{
	scanf("%d",integer);
}
void output(int integer)
{
	printf("%d의 2배는 %d입니다.\n",integer,integer*2);
	printf("%d의 제곱은 %d입니다.\n",integer,integer*integer);
}

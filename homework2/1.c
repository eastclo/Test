#include<stdio.h>
void output(int, int);
void input(int* ,int*);
void main()
{
	int num1, num2;
	printf("정수 2개 입력해 : ");
	//scanf("%d%d",&num1, &num2);
	input(&num1,&num2);
	output(num1,num2);
}
void input(int* num1, int* num2)
{
	scanf("%d %d",num1, num2);
}
void output(int num1, int num2)
{
	printf("%d + %d은 %d입니다.\n",num1,num2,num1+num2);
	printf("%d - %d은 %d입니다.\n",num1,num2,num1-num2);
	printf("%d * %d은 %d입니다.\n",num1,num2,num1*num2);
	printf("%d / %d은 %d입니다.\n",num1,num2,num1/num2);
	printf("%d %% %d은 %d입니다.\n",num1,num2,num1%num2);
}

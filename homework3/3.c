#include<stdio.h>
#include<string.h>
void input(char*);
void output(char*);
void main()
{
	char name[20];
	printf("이름을 입력하시오. : ");
	input(name);
	output(name);
}
void input(char* name)
{
	scanf("%s",name);
}
void output(char* name)
{
	int len;
	len=strlen(name);
	len*=1.5;	
	printf("\"%s\"\n",name);
	printf("\"%*s\"\n",len,name);
	printf("\"%-*s\"\n",len,name);
}

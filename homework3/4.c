#include<stdio.h>
#include<string.h>
void input1(char*);
void input2(char*);
void output(char*,char*);
void main()
{
	char Fname[20],Lname[20],Llength,Flength;
	printf("성을 입력하시오. : ");
	input1(Lname);
	printf("이름을 입력하시오. : ");
	input2(Fname);
	output(Lname,Fname);
}
void input1(char* Lname)
{
	scanf("%s", Lname);
}
void input2(char* Fname)
{
	scanf("%s", Fname);
}
void output(char* Lname,char*Fname)
{
	char Llength,Flength;
	Flength = strlen(Fname);
	Llength = strlen(Lname);
	printf("%s %s\n%*d %*d\n",Lname,Fname,Llength,Llength,Flength,Flength);
}

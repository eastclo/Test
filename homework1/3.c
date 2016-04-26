#include<stdio.h>
int main()
{
	float day, hour, min,sec ;
	printf("몇일? : ");
	scanf("%f",&day);
	printf("%.0f일 ",day);
	hour=(day-(int)day)*24;
	printf("%.0f시간 ",hour);
	min=(hour-(int)hour)*60;
	printf("%.0f분",min);
	sec=(min-(int)min)*60;
	printf("%.0f초\n",sec);
	return 0;
}

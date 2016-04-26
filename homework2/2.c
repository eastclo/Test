#include<stdio.h>
void input1(float* distance);
void input2(float* velocity);
void output1(float hour);
void output2(float min,float sec);	
void main()
{
	float velocity, distance, hour,min,sec;
	printf("주행거리(km)얼만데? : ");
	input1(&distance);
	printf("속력(km/h)얼만데? : ");
	input2(&velocity);
	hour=distance/velocity;
	output1(hour);
	min=(hour-(int)hour)*60;
	sec=(min-(int)min)*60;
	if (sec>59.999)
		sec=0;
	output2(min,sec);
}
void input1(float* distance)
{
	scanf("%f",distance);
}
void input2(float* velocity)
{
	scanf("%f", velocity);
}
void output1(float hour)
{
	printf("%.0f시간 ",hour);
}
void output2(float min, float sec)
{
	printf("%.0f분 %.3f초 \n",min,sec );
}

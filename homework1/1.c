#include<stdio.h>
int main()
{
	int money;
	printf("용돈 얼마? : ");
	scanf("%d", &money);
	printf("%d * %d\n",money/50000, 50000);
	printf("%d * %d\n", money%50000/ 10000, 10000);
	printf("%d * %d\n", money%50000%10000/5000, 5000);
	printf("%d * %d\n", money%50000%10000%5000/ 1000, 1000);
	printf("%d * %d\n", money%50000%10000%5000%1000/ 500, 500);
	printf("%d * %d\n", money%50000%10000%5000%1000%500/ 100,100);
	printf("%d * %d\n", money%50000%10000%5000%1000%500%100/ 50,50);
	printf("%d * %d\n", money%50000%10000%5000%1000%500%100%50/ 10,10);
	return 0;
}

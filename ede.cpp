#include<stdio.h>
void u()
{
	long double A,B,C=1,D=1,E,F=1,G,i;
	printf("输入第一个整数:");
	scanf("%lf",&A);
	printf("输入第二个整数:");
	scanf("%lf",&B);
	{
		for(i=1;i<=A;i++)
		C*=i;
		printf("第一个数的阶乘:%lf\n",C);
		for(i=1;i<=B;i++)
		D*=i;
		printf("第二个数的阶乘:%lf\n",D);
	}
		
	E=A-B;
		if(E<0)
		{
		printf("请保证A>B!\n");
		}
		else
	{
		for(i=1;i<=E;i++)
		F*=i;
		G=(C/D/F);
		printf("m/n/(m-n)的结果:%lf\n",G);
	}

}	
int main()
{
    u();
	return 0;
}
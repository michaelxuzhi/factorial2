#include<stdio.h>
void u()
{
	long double A,B,C=1,D=1,E,F=1,G,i;
	printf("�����һ������:");
	scanf("%lf",&A);
	printf("����ڶ�������:");
	scanf("%lf",&B);
	{
		for(i=1;i<=A;i++)
		C*=i;
		printf("��һ�����Ľ׳�:%lf\n",C);
		for(i=1;i<=B;i++)
		D*=i;
		printf("�ڶ������Ľ׳�:%lf\n",D);
	}
		
	E=A-B;
		if(E<0)
		{
		printf("�뱣֤A>B!\n");
		}
		else
	{
		for(i=1;i<=E;i++)
		F*=i;
		G=(C/D/F);
		printf("m/n/(m-n)�Ľ��:%lf\n",G);
	}

}	
int main()
{
    u();
	return 0;
}
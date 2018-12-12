#include<stdio.h>
int A(int x)
{
	if(x==0) return 1;
	int b=0;
	int i=2;
	for(i=2;i<x;i++)
	{
		if((x%i)==0)
		{b=1;break;}
	}
	return b;
}
int main()
{
	int N=0,P=0,Max=0,i;
	for(i=100;i<10000;i++)
	{
		int n=i,a[4],o=0;
		while(n>0)
		{
			a[o]=n%10;
			n=n/10;
			o++;
		}
		int pl=0,mul=1,mp=0,j;
		for(j=0;j<o;j++)
		{
			pl=pl+a[j];
			mul=mul*a[j];
			mp=mp+a[j]*a[j];
		}
		int q = A(pl) + A(mul) + A(mp) + A(i);
		if(q==0)
		{
			printf("%d\n",i);
			N++;
			P=P+i;
			if(i>Max)
			Max=i;
		}
	}
	printf("%d\n%d\n%d",N,P,Max);
	return 0; 
}

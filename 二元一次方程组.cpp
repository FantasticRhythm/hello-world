//求解如下方程组
 //ax + by = c
 //dx + ey = f
 //注意输入/输出，数据类型 
#include <stdio.h>
int main ()
{
	float a=0,b=0,c=0,d=0,e=0,f=0,x=0,y=0;
	printf("Please input the 系数\n");
	scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
	printf("方程为\n %f x+ %f y= %f \n %f x+ %f y= %f \n",a,b,c,d,e,f);
	if(b*d-a*e==0)
	{
	    if(c*d-a*f==0) printf("Funcations have infinite answers\n");
	    else printf("Funcations have no answers\n");
	}
	else
	{
		y=(c*d-a*f)/(b*d-a*e);
		x=(c*e-f*b)/(a*e-d*b);
		printf("x= %f \n y= %f \n",x,y);
	}
	main();
	return 0;
} 
//aex+bey=ce;
//dbx+eby=fb;

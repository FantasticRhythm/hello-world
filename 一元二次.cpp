#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,d;
	scanf("%lf%lf%lf",&a,&b,&c);
	d=b*b-4*a*c;
	if(d<0)
	  {
	  	printf("Your function have no result,please reinput\n"); 
	  	//scanf("%lf%lf%lf",&a,&b,&c);
		//d=b*b-4*a*c;
		main();
	  }
	
	 {
	 	if(d) 
	 	   
		  	printf("The result of the funcation is  %lf and %lf\n",
			  (-b+sqrt(d))/2/a,(-b-sqrt(d))/2/a);
		   // printf
			//("WORNING\n"); 
			
		else
		  
		  	printf
			("The result of the funcation is both %lf\n",(-b)/2/a);	   
		   
	 }
	 main();
    return 0;
		
}

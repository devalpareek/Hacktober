#include <stdio.h>
int main()
{

	long int num,sum,i,a,b;
	printf("enter any five digit no.");
	scanf("%d",&num);
	for(i=0;i<5;i++)
	   {
	       a=num%10;
	       b=num/10;
	       sum=sum+a;
	       num=b;
	    }
   	printf("sum of the digits of the %d is %d",num,sum);
	return 0;
}

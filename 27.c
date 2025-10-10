//program in c to display the series 1/2 +1/4....+1/n
#include<stdio.h>
int main ()
{
	float n, i;
	float sum=1;
	printf("enter the value of n");
	scanf("%f",&n);
	for(i=1;i<=n;i=i+2)
	{
	    sum=sum+1/i;
	}
	
	printf("%f",sum);
	
     	return 0;
	
}

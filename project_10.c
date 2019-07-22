#include<stdio.h>
#include<math.h>

#define below 2000000

void main()
{
	int i,res;
	double sum=0;
	for(i=2;i<below;i++)
	{
		if(prime(i)==1)
		{
			sum=sum+i;
		}
	}
	
	printf("sum=%lf\n",sum);
}

int prime(int n)
{
	int j;
	
	for(j=2;j<=sqrt(n);j++)
	{
		if(n%j==0) return 0;
	}
	
	return 1;
}

#include<stdio.h>
int main()
{
    int n,i,r,sum=0,product=1;
    scanf("%d",&n);
    i=n;
    while(i>0)
    {
    	r=i%10;
    	i=i/10;
    	sum+=r;
    	product*=r;
	}
	printf("%d",(product)-(sum));
}
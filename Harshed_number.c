#include<stdio.h>
int main()
{
    int N,r,i,sum=0;
    scanf("%d",&N);
    i=N;
    while(i>0)
    {
        r=i%10;
        i=i/10;
        sum+=r;
           
    }
    if(N%sum==0)
    {
        printf("True");
        
    }
    else
    {
       printf("False");
    }
}
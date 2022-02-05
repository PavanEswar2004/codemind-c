#include<stdio.h>
int main()
{
    int N,r,i;
    scanf("%d",&N);
    i=N;
    while(i>0)
    {
        r=i%10;
        i=i/10;
        printf("%d",r);
    }
}
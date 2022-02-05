#include<stdio.h>
int main(){
   int num, rem, reverse_num, i, start, end;
   scanf("%d%d",&start,&end);
   for(num=start;num<=end;num++){
     i=num;
      reverse_num=0;
    while(i){
         rem=i%10;
         i=i/10;
         reverse_num=reverse_num*10+rem;
      }
      if(num==reverse_num)
         printf("%d ",num);
   }
       return 0;
}
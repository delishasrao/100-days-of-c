#include <stdio.h>
int main()
{
   int a, b;
   int sum,sub,mul,div;
   printf("enter two numbers:");
   scanf("%d %d",&a,&b);
   sum=a+b;
   sub=a-b;
   mul=a*b;
   div=a/b;
   printf("sum=%d,sub=%d,mul=%d,div=%d",sum,sub,mul,div);
   return 0;
 }
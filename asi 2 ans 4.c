#include<stdio.h>
int main()
{
int a,n,t=0;
printf("Enter three digits no. to get its sum");
scanf("%d",&a);
while(a!=0)
{
    n=a%10;
    a=a/10;
    t=n+t;
}
printf("sum of three digit no. is %d",t);
return 0;
}

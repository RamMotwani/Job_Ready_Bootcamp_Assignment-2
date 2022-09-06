#include<stdio.h>
int main()
{
int n,a;
printf("enter a no.\n");
scanf("%d",&n);
printf("enter a single digit you want to append on the no.");
scanf("%d",&a);
n=n*10;
n=n+a;
printf("%d",n);
return 0;
}

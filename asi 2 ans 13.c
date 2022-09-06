#include<stdio.h>
int main()
{
    int a,n;
    printf("enter a three digit no.");
    scanf("%d",&a);
    n=a%10;
    a=a/10;
    n=n*100+a;
    printf("%d",n);
    return 0;

}

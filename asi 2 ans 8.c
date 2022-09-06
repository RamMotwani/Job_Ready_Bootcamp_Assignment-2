#include<stdio.h>
int main()
{
    int a,i;
    printf("enter a no.");
    scanf("%d",&a);
    i=a&1;
    if(i==0)
    {
        printf("even no.");
    }
    else
    {
        printf("odd no.");
    }
    return 0;
}

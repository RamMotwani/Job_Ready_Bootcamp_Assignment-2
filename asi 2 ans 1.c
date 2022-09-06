#include<stdio.h>
int main()
{
int a;
printf("Enter a no. to display it without its last digit");
scanf("%d",&a);
printf("Given no. %d without its last digit %d",a,a/10);
return 0;
}

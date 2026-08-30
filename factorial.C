#include<stdio.h>
#include<conio.h>
int main()
{
int n,fact=1;
printf("Enter a number to find factorial: ");
scanf("%d",&n);
while(n>0)
{
fact=fact*n;
n=n-1;
}
printf("Factorial is: %d",fact);
getch();
return 0;
}

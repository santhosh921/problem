#include<stdio.h>
#include<conio.h>
void main()
{
int fact=1,i,n;
clrscr();
printf("enter the value of n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("the fact %d",fact);
getch();

#include<stdio.h>
void main()
{
int initial,final,i;
printf("\n Enter the Range of values");
scanf("%d %d",&initial,&final);
for(i=initial+1;i<=final;i++)
{
if((i%2)==0)
{
printf("\n  %d",i);
}
}
}

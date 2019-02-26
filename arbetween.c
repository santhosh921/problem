#include <stdio.h>
int main()
{
int n1, n2, k, temp, num, rem;
printf("Enter two numbers(intervals): ");
scanf("%d %d", &n1, &n2);
printf("Armstrong numbers between %d an %d are: ", n1, n2);
for(k=n1+1; k<n2; ++k)
{
temp=k;
num=0;
while(temp!=0)
{
rem=(temp%10);
num+=rem*rem*rem;
temp/=10;
}
if(k==num)
{
printf("%d ",k);
}
}
return 0;
} 

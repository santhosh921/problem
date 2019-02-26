#include <stdio.h>
int main()
{
    int n, reversed = 0, rem, originalInteger;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n>=1000)
    {
        printf("no can't calculate");
    }
    else
    {
       originalInteger = n;
       while( n!=0 )
      {
        rem= n%10;
        reversed = reversed*10 + rem;
        n /= 10;
       }
        if (originalInteger == reversed)
        printf("%d is a palindrome.", originalInteger);
      else
        printf("%d is not a palindrome.", originalInteger);
    }
    
    return 0;
}

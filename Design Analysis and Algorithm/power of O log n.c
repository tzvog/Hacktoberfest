/*  Write two recursive programs to compute X n, where both x and n are integers, one computes it in O(log(n)) time.*/


#include<stdio.h>
int power(int a, int b)
{
    if (b==0)
    {
        return 1;
    }
    else if (b%2==0)
    {
        return (power((a*a), (b/2)));
    }
    else
    {
        return (a*power(a,b-1));
    }
}

int main()
{
    int a,b;
    printf("Enter the base value: ");
    scanf("%d",&a);
    printf("Enter the exponent value: ");
    scanf("%d",&b);
    
    printf("Value of %d^%d is %d",a,b, power (a,b));
    return 0;
}
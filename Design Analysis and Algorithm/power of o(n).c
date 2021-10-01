/* Write two recursive programs to compute X n, where both x and n are integers, one computes it in O(n) time. */

#include<stdio.h> 
int power(int, int);
int main(void)
{    
    int base, exponent;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    printf("%d^%d = %d", base, exponent, power(base, exponent));

    return 0; 
}

int power(int base, int exponent)
{    
    if(exponent == 0)
    {
        return 1;
    }

    else
    {
        return base * power(base, exponent - 1);
    }

}
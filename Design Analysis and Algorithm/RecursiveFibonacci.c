/* WAP to find out n th FIBONACCI number using recursion. */

#include <stdio.h>
 
int fibo(int num)
{
  	if (num == 0)
  		return 0;
  	else if (num == 1)
  		return 1;
  	else
  		return(fibo(num - 1) + fibo(num - 2));
}

int main()
{
  	int num;
  	int result;
 
  	printf("Enter the nth number in fibonacci series: ");
	scanf("%d", &num);
  	if (num < 0)
  	{
  		printf("Fibonacci of negative number 	is not possible.\n");
  	}
  	

else
  	{
    		result = fibo(num);
    		printf("The %d number in Fibonacci series is %d\n", num, result);
  	}
  	return 0;
}


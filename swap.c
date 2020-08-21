#include<stdio.h>
int main()
{
	int first,second,third;
	printf("Enter first number");
	scanf("%d",&first);
	printf("Enter second number");
	scanf("%d",&second);
	third = second;
	second = first;
	first = third;
	printf("\nAfter swapping, firstNumber = %d\n", first);
	printf("After swapping, secondNumber = %d", second);
	return 0;
}

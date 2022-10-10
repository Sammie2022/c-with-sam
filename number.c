#include<stdio.h>
/*write a code to check if the number is even or odd*/
int main (void)
{
	int a;
	printf("give a number");
	scanf("%d", &a);
	if (a % 2 == 0)
		printf("%d is even\n", a);
	else if (a % 2 !=0)
		printf("%d is odd\n", a);
	else 
		printf("give us a valid number\n");
	return (0);
}

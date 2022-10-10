#include<stdio.h>
/*Write a program to read the age of a candidate and determine whether it is eligible for her/his own vote*/

int main(void)
{
	int age;
	printf("enter your age\n");
	scanf("%i", &age);
	if (age >= 18)
		printf("eligible to vote\n");
	else
		printf("not eligible to vote\n");
			
	return 0;
}

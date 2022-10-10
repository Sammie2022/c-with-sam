#include<stdio.h>
/*Write a C program to accept the height of a person in centimeter and categorize the person according to their height
 * height < 120 : You are a dwarf
 * height between 120 and 150: you are short
 * height between 150 and 170: You are a bit tall
 * height between 170 and 200: You are tall
 */
int main(void)
{
	int height;
	printf("what is the height");
	scanf("%i", &height);
	if (height < 120)
	{
		printf("you are a dwarf\n");
	}
	else if (height >=120 && height < 150)
	{
		printf("you are short\n");
	}
	else if (height >= 150 && height < 170)
	{
		printf("you are a bit tall\n");
	}
	else if (height >= 170 && height < 200)
	{
		printf("you are tall\n");
	}
       	else 
		printf("you are too tall\n");
	return 0;
}

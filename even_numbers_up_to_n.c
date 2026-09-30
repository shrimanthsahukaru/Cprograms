#include <stdio.h>

int main()
{
	int count, counter;

	printf("Up to which number do you want to print even numbers? ");
	scanf("%i", &count);
	printf("The even numbers upto %i are ", count);
	counter = 0;
	while(counter<count-1)
	{
		printf("%i, ", counter);
		counter = counter+2;
	}
	printf("%i.\n", counter);

	return 0;
}

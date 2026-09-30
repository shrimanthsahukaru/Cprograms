#include <stdio.h>
int main()
{
	int count, counter;

	printf("Up to which number you want to print natural numbers? ");
	scanf("%i", &count);
	printf("The natural numbers up to %i are ", count);
	counter = 1;
	while(counter < count)
	{
		printf("%i, ", counter);
		counter = counter+1;
	}
	printf("%i.\n", counter);

	return 0;
}

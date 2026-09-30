#include <stdio.h>

int main()
{
  int count, counter, even_counter;

  printf("How many even numbers do you want to print? ");
  scanf("%i", &count);
  printf("The first %i even numbers are ", count);
  counter = 0;
  even_counter = 0;
  while(counter<count-1)
  {
  	printf("%i, ", even_counter);
  	even_counter = even_counter+2;
  	counter = counter+1;
  }
  printf("%i.\n", even_counter);

  return 0;
}

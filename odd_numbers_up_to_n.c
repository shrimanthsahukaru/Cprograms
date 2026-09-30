#include <stdio.h>

int main()
{
  int count, counter;

  printf("Up to which number do you want to print odd numbers? ");
  scanf("%i", &count);
  printf("The odd numbers upto %i are ", count);
  counter = 1;
  while(counter<count-1)
  {
  	printf("%i, ", counter);
  	counter = counter+2;
  }
  printf("%i.\n", counter);

  return 0;
}

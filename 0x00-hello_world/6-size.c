#include <stdio.h>

/*
 * main - prints the size of various types on the computer it is compiled and run on.
 *return : always 0
 */

int main(void)
{
  printf("Size of a char: %zu byte(s)\n",sizeof(char));
  printf("Size of an int: %d byte(s)\n",sizeof(int));
  printf("size of an long int: %ld bytes(s)\n",sizeof(long int));
  printf("Size of a long long int: %lld byte(s)\n",sizeof(long long int));
  printf("Size of a float: %zu byte(s)",sizeof(float));

  return (0);
}

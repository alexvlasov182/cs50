#include <stdio.h>

int const size = 6;

int main(void)
{
  // Decalare an array
  int numbers[size]; //[1,2,3,4] // 2, 4, 8, 16
  numbers[0] = 1;
  // Populate an array
  for (int i = 1; i < size; i++)
  {
    numbers[i] = numbers[i - 1] * 2;
  }

  // Print out the values one by one
  for(int i = 0; i < size; i++)
  {
    printf("%i\n", numbers[i]);
    
  }

}
#include <cs50.h>
#include <stdio.h>


int main(void)
{
  // lenear search
  int numbers[] = {20, 500, 10, 5, 1, 50};

  int n = get_int("Number: ");
  for (int i = 0; i < 7; i++)
  {
    if (numbers[i] == n)
    {
      printf("Found\n");
      return 0;
    }
  }
  printf("Not fount\n");
  return 1;
}
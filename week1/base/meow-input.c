#include <stdio.h>

void meow(int n);

int main(void)
{
  meow(13);
}

// Meow some number of times
void meow(int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("meow\n");
  }
}

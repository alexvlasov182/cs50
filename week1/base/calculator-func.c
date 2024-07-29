#include <cs50.h>
#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main(void)
{
  int choice, x, y;
  // Display menu options
  printf("Select operation:\n");
  printf("1. Addition\n");
  printf("2. Subtraction\n");
  printf("3. Multiplication\n");
  printf("4. Division\n");

  // Get user's choice
  choice = get_int("Enter choice (1/2/3/4): ");

  // Get user inputs
  x = get_int("Enter first number (x): ");
  y = get_int("Enter second number (y): ");

  switch (choice)
  {
    case 1:
      printf("Result: %i\n", add(x, y));
      break;
    case 2:
      printf("Result: %i\n", subtract(x,y));
      break;
    case 3:
      printf("Result: %i\n", multiply(x,y));
      break;
    case 4:
      if (y != 0)
      {
        printf("Result: %.2f\n", divide(x,y));
      }
      else
      {
        printf("Error: Division by zero\n");
      }
      break;
    default:
      printf("Invalid choice\n");
      break;
  }
  return 0;
}

int add(int a, int b)
{
  return a + b;
}

int subtract(int a, int b)
{
  return a - b;
}

int multiply(int a, int b)
{
  return a * b;
}

float divide(int a, int b)
{
  return (float)a / b;
}

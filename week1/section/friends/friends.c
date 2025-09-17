#include <stdio.h>
#include <cs50.h>

int main(void)
{
  // Name
  string name = get_string("What is you name? ");

  // Age
  int age = get_int("What is you age? ");

  // Hometown
  string hometown = get_string("What is your hometown? ");
  
  // Phone number
  string number = get_string("What is your phone number? ");

  printf("This is my name %s, my age is %i, I am from %s, my number %s", name, age, hometown, number);

}
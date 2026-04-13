#include <cs50.h>
#include <stdio.h>
#include <string.h>
// CS50 includes functions created specifically for cs50 class. These are not
// standard functions

// Declare prototypes
int add(int x, int y);
int subtract(int x, int y);
int divide(int x, int y);
int multiply(int x, int y);
int modulo(int x, int y);

// main function containing program logic
int main(void) {
  // declare variables
  int x;
  int y;
  char name[100];

  // string name = get_string("What's your name, partner? ");
  printf("What's your name? ");
  fgets(name, sizeof(name), stdin);
  // The strcspn() function in C (found in <string.h>) calculates the length of
  // the initial segment of a string (s1) that consists entirely of characters
  // not present in a second string (s2). It returns the index of the first
  // character in s1 that matches any character in s2, or the length of s1 if no
  // matches are found. Here we use it to remove trailing newline character...
  name[strcspn(name, "\n")] = '\0';
  printf("Hello, %s.\n", name);

  printf("Enter a number: ");
  scanf("%i", &x);

  printf("Enter a second number: ");
  scanf("%i", &y);

  printf("The sum of %i and %i is: %i\n", x, y, add(x, y));
  printf("The difference of %i and %i is: %i\n", x, y, subtract(x, y));
  printf("The quotient of %i by %i is: %i\n", y, x, divide(y, x));
  printf("The product of %i by %i is: %i\n", x, y, multiply(x, y));
  printf("The remainder of %i divided by %i is: %i\n", y, x, modulo(y, x));
  return 0;
}

// functions created that we call in the main function
int add(int x, int y) { return x + y; }
int subtract(int x, int y) { return x - y; }
int divide(int x, int y) { return x / y; }
int multiply(int x, int y) { return x * y; }
int modulo(int x, int y) { return x % y; }

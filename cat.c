#include <cs50.h>
#include <stdio.h>

// Call the prototype of your function, which declares it up front
void meow(int n);
int add(int x, int y);

int main(void) {
  int n = get_int("What's n? ");
  meow(n);

  int x = get_int("How many cats do you have? ");
  int y = get_int("How many cats does your best friend have? ");

  printf("The sum of your two numbers is %i.\n", add(x, y));
  printf("If each of ya'lls cats meow three times, that's %i meows. That's a "
         "lot of racket!\n",
         add(x, y) * 3);
}

// Create 'meow' function. 'int n' tells the function to expect a value
// to be passed into it
void meow(int times) {
  for (int i = 0; i < times; i++) {
    printf("Meow\n");
  }
}

int add(int x, int y) {
  return x + y;
}

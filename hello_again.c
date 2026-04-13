#include <cs50.h>
#include <stdio.h>

int main(void) {
  printf("Hello, again! Let's retrieve some user input. :)\n");
  string firstName = get_string("Enter your name: ");
  printf("Hello, %s.\n", firstName);
  return 0;
}

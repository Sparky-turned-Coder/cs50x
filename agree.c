#include <cs50.h>
#include <stdio.h>

int main(void) {
  char c = get_char("Do you agree? \n");

  if (c != 'y' || c != 'Y' || c != 'n' || c != 'N') {
    printf("You entered the wrong character.\n");
  } else if (c == 'y' || c == 'Y') {
    printf("Agreed.\n");
  } else {
    printf("Agree to disagree.\n");
  }
}

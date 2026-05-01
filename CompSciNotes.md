# Notes taken during CS50x

### Manual Pages
    manual.cs50.io

### Conversion Specifications

- %C    |   char
- %lf   |   double
- %f    |   float
- %i    |   int
- %li   |   long int

### While loops

__Basic syntax:__

    while (true)
    {
        do something;
    }

__Example 1: While loop__

    int main(void) {
        int i = 3;
        while (i > 0) {
            printf("Meow\n");
            i--;
        }
    }

__Example 2: While loop__

    
    int main(void) {
        int n;
        while (true) {
            n = get_int("What's n? ");
            if (n >= 0) {
            break;
            }
        }
        for (int i = 0; i < n; i++) {
            printf("Meow\n");
            }
        }

__Example 3: Do/While loop__

    int main(void) {
        int n;

        do {
            n = get_int("What's n? ");
        } while (n < 0);

        for (int i = 0; i < n; i++) {
            printf("Meow\n");
            }
        }

### Creating a function

__Basic Syntax__

    void meow(void)
    {
        printf("meow\n");
    }

In C, a function's _Output_ is declared at the beginning of the function name. The _input_ is declared at the end in paranthesis ().

    'output(returns this)' meow('input')
    {
        printf("meow\n");
    }
    
    In other words:

    void(returns nothing) meow(int n)
    {
        printf("Meow\n");
    }

NOTE: When creating a function and setting it at the bottom of your script, 
you need to include a prototype of its signature at the top of the script, 
_before_ the main function.

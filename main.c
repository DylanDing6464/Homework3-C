#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int digit_sum(int n) {
    if (n<10){
        return n;
    }
    return n%10+digit_sum(n/10);
}

int main(void) {
  char* n = readline("Enter an int: ");
  int input = atof(n);
  int result = digit_sum(input);
  printf("sum of digits of %i is %i.\n", input, result);
}

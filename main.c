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
  int result = atof(n);
  int result2 = digit_sum(n);
  printf("sum is %i.\n", result);
}

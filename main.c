#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int digit_sum(int n) {
  if (n == 0)
    return 0;
  else
    return(digit_sum(n / 10) + (n % 10));
}
int main(void) {
  char *num = readline("Enter an int: ");
  int numChange = strtod(num, NULL);
  printf("sum of digits of %s is %i.\n", num, digit_sum(numChange));

}
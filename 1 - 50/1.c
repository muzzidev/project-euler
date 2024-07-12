/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.*/

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const* argv[]) {
  // declara variables
  int sum = 0;
  int i = 0;
  // mientras i sea menor que la entrada del usuario se ejecuta
  while (i < 1000) {
    // si i es divisible por 3 o 5 le suma i a sum
    if (!(i % 3) || !(i % 5)) {
      sum += i;
      i++;
    }
    else {
      i++;
    }
  }
  printf("%i\n", sum);
  return 0;
}
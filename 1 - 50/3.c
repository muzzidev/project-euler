//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_prime(int n) {
  for (int i = 2; i < n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

int main(int argc, char const* argv[]) {
  long long int num = strtoll(argv[1], NULL, 10);
  int i;
  // bucle que se ejecuta mientras i sea menor a num
  for (i = 2; i <= num; i++) {
    // mientras sea primo, sea un divisor de num y tambien sea menor a num lo imprime
    while (is_prime(i) && (num % i == 0) && i <= num) {
      printf("%lld\t", num);
      printf("%i\n", i);
      num /= i;
    }
  }
  printf("El factor primo más grande de %lld es: %i", strtoll(argv[1], NULL, 10), --i);
  return 0;
}
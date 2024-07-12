/* Find the largest palindrome made from the product of two 3-digit numbers. */
#include <stdio.h>
#include <stdlib.h>
int palindrome(int num) {
  int num_original = num;
  int num_invertido = 0;
  int digito;
  while (num) {
    digito = num % 10; // toma el ultimo digito de num
    num_invertido = (num_invertido * 10) + digito; // recrea el numero invertido
    num /= 10; // "elimina" el ultimo digito de num
  }
  //si el numero invertido es igual al original entonces retorna 1
  return num_invertido == num_original;
}
int main(int argc, char const* argv[]) {
  int largest_palindrome = 1;
  for (int i = 100; i < 1000; i++) {
    for (int j = 100; j < 1000; j++) {
      // si j x n es palíndromo y es más grande que el palíndromo más grande econtrado hasta ahora lo reasigna a largest_palindrome
      if (palindrome(i * j) && (i * j) > largest_palindrome) {
        largest_palindrome = i * j;
      }
    }
  }
  printf("El palindromo más grande resultado del producto de dos numeros de 3 digitos es %i\n", largest_palindrome);
  return 0;
}

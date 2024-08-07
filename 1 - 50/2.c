/*Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first terms will be:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89,...
By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms. */

#include <stdio.h>
#include <stdlib.h>
int main(void) {
  // declaro el iterador i, la variable f y temp que es el valor temporal del resultado de los dos anteriores
  int i = 1;
  int f = 2;
  int temp = 0;
  int sum = 0;
  // mientras i sea menor o igual que 4 millones
  while (i <= 4000000) {
    // si f es par lo sumo a sum
    if (!(f % 2)) {
      printf("%i + %i = ", sum, f);
      sum += f;
      printf("%i\n", sum);
    }
    temp = i + f; // temp toma el resultado de la suma de los dos valores anteriores en la sucesión
    i = f;        // i pasa a valer f, osea toma el puesto del anterior valor al actual
    f = temp;     // f pasa a valer temp
  }
  printf("%i\n", sum);
  return 0;
}

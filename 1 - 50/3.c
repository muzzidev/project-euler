//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  int num = atoi(argv[1]);
  int contador = 0;
  int primoMasLargo = 0;
  for (int i = 1; i < num; i++){
    for (int h = 2; h < i; h++){
      if (i % h == 0){
        break;
      }else{
        primoMasLargo = i;
      }
    }
  }
  printf("%i\n", primoMasLargo);
  return 0;
}
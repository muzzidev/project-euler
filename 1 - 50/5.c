/* 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20? */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int max = atoi(argv[1]);
  for(int res = 1; res < 2147483647; res++) {
    for (size_t i = 1; i <= max; i++) {
      if (res % i != 0)
        break;
      else if (i == max){
        printf("%d", res);
        return 0;
      }
    }
  }
  puts("there is not");
  return 0;
}
// Tim Marder & Dahong Jiang
// Systems pd04
// Work #05 -- If you like it then you should've put a string on it.
// 2018-09-28

#include <stdio.h>
#include <stdlib.h>
#include "mystr.h"
#include <string.h>

int main() {

  char a[10] = "Hello";
  char b[10] = "Goodbye";
  char c[10] = "Friend";
  //strlen //strcpy //strncat //strcmp //strchr
  printf("Testing strlen: %ld \n", strlen(a));
  printf("Testing strcpy(a , b), a: %s \n", strcpy(a , b));
  printf("Running strncat(b , c , 3)...");
  strncat(b, c, 3);
  printf("New value of b: %s \n", b);
}

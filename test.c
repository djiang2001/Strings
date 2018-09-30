// Tim Marder & Dahong Jiang
// Systems pd04
// Work #05 -- If you like it then you should've put a string on it.
// 2018-09-28

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char a[20] = "Hello";
  char b[20] = "Goodbye";
  char c[20] = "Friend";
  char d[20] = "aaa";
  char e[20] = "aaa";
  //strlen //strcpy //strncat //strcmp //strchr
  printf("\n");
  printf("Testing strlen: %ld \n", strlen(a));
  printf("Original a: %s", a);
  printf("\n");
  printf("Testing strncpy(a , b, 4), new value of a: %s \n", strncpy(a , b, 4));
  printf("Running strncat(b , c , 3)...");
  printf("\n");
  strncat(b, c, 3);
  printf("New value of b: %s \n", b);

  int comparison;
  comparison = strcmp( d , e );
  if (comparison > 0) {
    printf("d is greater than e");
  }
  else if (comparison < 0 ) {
    printf("d is less than e");
  }
  else {
    printf("d is equal to e");
  }

  printf("\n");

  char f[20] = "Jonathan";
  char chr = 't';

  printf("In string: %s, it is %s after %c", f, strchr(f, chr), chr);
  printf("\n");
  printf("\n");

  char x[20] = "TutorialsPointer";
  char y[10] = "Point";


   printf("The substring is: %s\n", strstr(x , y));

  printf("\n");
  printf("\n");
}

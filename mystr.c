// Tim Marder & Dahong Jiang
// Systems pd04
// Work #05 -- If you like it then you should've put a string on it.
// 2018-09-28

#include <stdio.h>
#include <stdlib.h>
#include "mystr.h"

int mystrlen( char *chr ) {

  int counter = 0;
  while (*chr) {
    counter++;
    chr++;
  }
  return counter;

}

char * mystrcpy( char *dest, char *source ) {

  for(int i = 0 ; i < mystrlen(source) ; i++) {
    dest[i] = source[i];
  }
  return dest;

}

char * mystrncpy( char *dest, char *source, int n) {

  for (int i = 0 ; i < n ; i++) {
    dest[i] = source[i];
  }
  return dest;

}

char * mystrcat( char *dest, char *source ) {

  for (int i = 0 ; i < mystrlen(source) ; i++) {
    dest[mystrlen(dest)] = source[i];
  }
  return dest;

}

char * mystrncat( char *dest, char *source, int n) {

  for (int i = 0 ; i < n ; i++) {
    dest[mystrlen(dest)] = source[i];
  }
  return dest;

}

int mystrcmp( char *s1, char *s2 ) {

  int total1 = 0;
  int total2 = 0;

  for (int i = 0 ; i < mystrlen(s1) ; i++) {
    total1 += (int)s1[i];
  }
  for (int i = 0 ; i < mystrlen(s2) ; i++) {
    total2 += (int)s2[i];
  }
  return total1 - total2;

}

char * mystrchr( char *s, char c) {

  while (*s) {
    if (*s == c) {
      return s;
    }
    s++;
  }
  return NULL;
}

char * mystrstr( char *s1, char * s2 ) {

  for (int i = 0 ; i <= mystrlen(s1) - mystrlen(s2) ; i++) {
    int truth = 1;
    int counter = 0;
    while (counter < mystrlen(s2)) {
      if (*(s1 + counter + i) != *(s2 + counter)) {
        truth = 0;
      }
      counter++;
    }
    if (truth == 1) {
      return s1 + i;
    }
  }
  return NULL;
}


int main() {

  

}

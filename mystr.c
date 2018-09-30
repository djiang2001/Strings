// Tim Marder & Dahong Jiang
// Systems pd04
// Work #05 -- If you like it then you should've put a string on it.
// 2018-09-28

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mystr.h"

int main(){
  char s1[20] = "Hello";
  char s2[20] = "Goodbye";
  char s3[20] = "Friend";
  char s4[20] = "15";
  char s5[20] = "20";
  //strlen //strcpy //strncat //strcmp //strchr
  printf("s1: %s \n s2: %s \n s3: %s \n s4: %s s5:%s \n");
  printf("Testing strlen s1 \n [standard]: %ld \n [ours]: %d \n ", strlen(s1),mystrlen(s1));
  printf("Testing strcpy(s1 ,s2), \n [standard]:%s \n [ours]: %s \n ", strcpy(s1 , s2), mystrcpy(s1,s2));
  printf("Testing strncat: \n [standard]: %s \n [ours]: %s \n ", strncat(s1,s2,3), mystrncat(s1,s2,3));
  printf("Testing strcmp: \n [standard]: %d \n [ours]: %d \n ", strcmp(s1,s2),mystrcmp(s1,s2));
  printf("Testing strchr:\n [standard]: %c \n [ours]: %c \n ", strchr(s1,3), mystrchr(s1,3));
}

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

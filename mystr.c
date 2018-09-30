// Tim Marder & Dahong Jiang
// Systems pd04
// Work #05 -- If you like it then you should've put a string on it.
// 2018-09-28

#include <stdio.h>
#include <stdlib.h>
#include "mystr.h"
#include <string.h>

int main() {

  char a[20] = "Hello";
  char b[20] = "Goodbye";
  char c[20] = "Friend";
  char d[20] = "15";
  char e[20] = "20";
  //strlen //strcpy //strncat //strcmp //strchr
  printf("\n");
  printf("Testing strlen: %ld \n", strlen(a));
  printf("Original a: %s", a);
  printf("\n");
  printf("Testing strcpy(a , b), new value of a: %s \n", strcpy(a , b));
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
}

int mystrlen(char * s){
  int count = 0;
  while(*(s + count)){
    count++;
  }
  return count;
}

char * mystrcpy(char *dest,char *source );{
  char *start = dest;
  while(*source){
    *dest = *source;
    dest++;
    source++
  }
  *dest = '\0';
  return start;
}

char *mystrncat(char *dest, char *source, int n){
  char *start = dest;
  while(*dest){
    dest++;
  }
  while(n){
    *dest = *source;
    dest++;
    source++;
    n--;
  }
  return start;
}

int mystrcmp(char *s1,char *s2){
  while((*s1 && *s2) && (*s1== *s2)){
    s1++;
    s2++;
  }
  if(*s1 == s2){
    return 0;
  }else
    {
      return *s1 - s2;
    }
}


// Tim Marder & Dahong Jiang
// Systems pd04
// Work #05 -- If you like it then you should've put a string on it.
// 2018-09-28

#include <stdio.h>
#include <stdlib.h>
#include "mystr.h"
#include <string.h>

int main() {

  char s1[20] = "Hello";
  char s2[20] = "Goodbye";
  char s3[20] = "Friend";
  char s4[20] = "15";
  char s5[20] = "20";
  //strlen //strcpy //strncat //strcmp //strchr
  printf("s1: %s \n s2: %s \n s3: %s \n s4: %s s5:%s \n");
  printf("Testing strlen s1 [standard]: %ld \n [ours]: %d", strlen(s1),mystrlen(s1));
  printf("Testing strcpy(s1 ,s2), [standard]:%s \n [ours]: %s \n", strcpy(s1 , s2), mystrcpy(s1,s2));
  printf("Running strncat(b , c , 3)... \n");
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


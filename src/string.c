#include <stdio.h>

#include "string.h"

size_t strlen(const char *s) {
  if (NULL == s) {
    return 0;
  }

  size_t length = 0;
  while (*s != 0) {
    length++;
    s++;
  }

  return length;
}

int strcmp(const char *s1, const char *s2) {
  printf("zoo");
  printf("%c, - %c \n", *s1, *s2);

  char string_one = *s1;
  char string_two = *s2;

  while (string_one != 0 || string_two != 0) {
    printf("%c, - %c \n", string_one, string_two);
    if (string_one == string_two) {
      string_one++, string_two++;
    } else {
      return 0; // false
    }
  }

  return 1; // true
}



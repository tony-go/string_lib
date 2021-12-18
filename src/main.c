#include <stdio.h>
#include <stdlib.h>

#include "string.h"

char* assert_int(int a, int b);

int main(void) {
  printf("string test =============\n");

  printf("strlen:\n");
  printf("assert base length %s\n", assert_int(strlen("yo"), 2));
  printf("assert empty string %s\n", assert_int(strlen(""), 0));
  printf("assert null string %s\n", assert_int(strlen(NULL), 2));

  return EXIT_SUCCESS;
}

/**
 * 
 * HELPERS
 * 
 */

char* assert_int(int a, int b) {
  if (a == b) {
    return "pass";
  }
  return "fail";
}

#include <stdio.h>
#include <stdlib.h>

#include "string.h"

char* assert_int(int, int);
char* assert_true(int);
char* assert_false(int);

int main(void) {
  printf(" ============= string test =============\n");

  printf("-> strlen:\n");
  printf("- assert base length %s\n", assert_int(strlen("yo"), 2));
  printf("- assert empty string %s\n", assert_int(strlen(""), 0));
  printf("- assert null string %s\n", assert_int(strlen(NULL), 0));

  printf("-> strcmp:\n");
  printf("- assert equal string %s\n", assert_true(strcmp("yo", "yo")));

  return EXIT_SUCCESS;
}

/**
 * 
 * HELPERS
 * TODO: move in separate file
 * 
 */

char* assert_int(int a, int b) {
  if (a == b) {
    return "pass";
  }
  return "fail";
}

char* assert_true(int a) {
  if (a == 1) {
    return "pass";
  }
  return "fail";
}

char* assert_false(int a) {
  if (a == 0) {
    return "pass";
  }
  return "fail";
}


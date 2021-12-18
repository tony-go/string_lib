#include <stdio.h>

#include "string_lib.h"

char* assert_int(int, int);
char* assert_true(int);
char* assert_false(int);

int strcmp(const char* s1, const char* s2) {
 printf("here \n");

 if (*s1 != 0 && *s2 != 0) {
  return 1;
 }

 return 0;
}

void run_tests(void) {
  printf(" ============= string test =============\n");

  printf("-> strlen:\n");
  printf("- assert base length %s\n", assert_int(strlen("yo"), 2));
  printf("- assert empty string %s\n", assert_int(strlen(""), 0));
  printf("- assert null string %s\n", assert_int(strlen(NULL), 0));

  printf("-> strcmp:\n");
  strcmp("0", "0");
  // printf("- assert equal string %s\n", assert_true(strcmp("yo", "yo")));
}

int main(void) {
  run_tests();
  
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


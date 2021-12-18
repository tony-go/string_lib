#include <stdio.h>
#include <stdlib.h>

#include "string_lib.h"

char* assert_int(int, int);
char* assert_true(int);
char* assert_false(int);

void run_tests(void) {
  printf(" ============= string test =============\n");

  printf("-> str_len:\n");
  printf("- assert base length %s\n", assert_int(str_len("yo"), 2));
  printf("- assert empty string %s\n", assert_int(str_len(""), 0));
  printf("- assert null string %s\n", assert_int(str_len(NULL), 0));

  printf("-> str_cmp:\n");
  printf("- assert equal string %s\n", assert_true(str_cmp("yo", "yo")));
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


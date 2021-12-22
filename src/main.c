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
  printf("- compare same string %s\n", assert_int(str_cmp("yo", "yo"), 0));
  printf("- compare s1 greather than s2 %s\n", assert_int(str_cmp("yoo", "yo"), 1));
  printf("- compare s1 greather than s2 %s\n", assert_int(str_cmp("yooo", "yo"), 1));
  printf("- compare string with string %s\n", assert_int(str_cmp("yoooo", "yo"), 1));
  printf("- compare s1 greather than s2 %s\n", assert_int(str_cmp("yo", "yoo"), -1));
  printf("- compare s1 smaller than s2 %s\n", assert_int(str_cmp("yo", "yooo"), -1));
  printf("- compare s1 smaller than s2 %s\n", assert_int(str_cmp("yo", "yu"), -1));
  printf("- compare same length stirng with different chars %s\n", assert_int(str_cmp("abc", "bcd"), -1));
  printf("- compare same length stirng with different chars %s\n", assert_int(str_cmp("za", "ba"), 1));
  printf("- compare NULL and string %s\n", assert_int(str_cmp(NULL, "a"), 1));
  printf("- compare string and NULL %s\n", assert_int(str_cmp("a", NULL), -1));
  printf("- compare NULL and NULL %s\n", assert_int(str_cmp(NULL, NULL), 0));
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
  printf("--> diff: a: %d, b: %d \n", a, b);
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


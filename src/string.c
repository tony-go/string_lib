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



#include <stdio.h>

size_t str_len(const char *s)
{
  if (NULL == s)
  {
    return 0;
  }

  size_t length = 0;
  while (*s != 0)
  {
    length++;
    s++;
  }

  return length;
}

int str_cmp(const char *s1, const char *s2)
{
  while (*s1 != 0 && *s2 != 0)
  {
    s1++, s2++;
  }

  if (*s1 == *s2) {
    return 0;
  }

  if (*s1 < *s2) {
    return -1;
  }

  return 1;
}

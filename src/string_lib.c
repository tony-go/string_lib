#include <stdio.h>

int EOS = '\0';

size_t str_len(const char *s)
{
  if (NULL == s)
  {
    return 0;
  }

  size_t length = 0;
  while (s[length++] != EOS);

  return length - 1;
}

int str_cmp(const char *s1, const char *s2)
{
  while (*s1 != EOS && *s2 != EOS)
  {
    if (*s1 == *s2) {
      s1++, s2++;
    } else {
      break;
    }
  }

  if (*s1 == *s2) {
    return 0;
  }

  if (*s1 < *s2) {
    return -1;
  }

  return 1;
}

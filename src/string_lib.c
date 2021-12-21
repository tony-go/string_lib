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
  if (NULL == s1 && NULL == s2)
  {
    return 0;
  }
  if (NULL == s1)
  {
    return 1;
  }
  if (NULL == s2)
  {
    return -1;
  }

  size_t i = 0;
  while (s1[i] != EOS && s2[i] != EOS)
  {
    if (s1[i] == s2[i]) {
      i++;
    } else {
      break;
    }
  }

  if (s1[i] == s2[i]) {
    return 0;
  }

  if (s1[i] < s2[i]) {
    return -1;
  }

  return 1;
}

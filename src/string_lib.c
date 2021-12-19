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
  int res = 0;

  while (*s1 != 0 && *s2 != 0)
  {
    s1++, s2++;
  }

  if (*s1 != 0 && *s2 == 0)
  {
    res++;
    while (*(++s1) != 0)
    {
      res++;
    }
  }

  if (*s1 == 0 && *s2 != 0)
  {
    res--;
    while (*(++s2) != 0)
    {
      res--;
    }
  }

  return res;
}

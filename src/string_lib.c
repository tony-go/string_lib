#include <stdio.h>

size_t str_len(const char *s) {
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

int str_cmp(const char* s1, const char* s2) {
  int res = 0;

  while (*s1 != 0 && *s2 != 0) {
    char buffer_1 = *s1;
    char buffer_2 = *s2;
    // printf("%c, %c \n", buffer_1, buffer_2);

    if (buffer_1 != 0 && buffer_2 == 0) {
      printf("here a");
      res++;
      while (*(++s1) != 0) {
        res++;
      }
      break;
    }

    if (buffer_1 == 0 && buffer_2 != 0) {
      printf("here b");
      res--;
      while (*(++s2) != 0) {
        res--;
      }
      break;
    }

    s1++, s2++;
    // printf("after %d and %d \n", *s1, *s2);
  }


 return res;
}

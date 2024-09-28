#include <stdio.h>
#include <string.h>

int ft_memmove(char *dest, char *src, size_t n)
{
  int i;

  i = 0;
  while (i != n)
  {
    dest[i] = src[i];
    i++;
  }
}

int main()
{
  char src[20] = "ouahidi ayoub";
  char dest_s[20] = "0123456789";
  char dest_a[20] = "0123456789";

  memmove(dest_s, src, 4);
  printf("string's function : %s\n", dest_s);
  ft_memmove(dest_a, src, 4);
  printf("string's function : %s\n", dest_a);
}

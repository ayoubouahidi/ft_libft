#include <stdio.h>
#include <string.h>

void ft_memset(void *a, int b, unsigned int c)
{
  int i;
  unsigned char *dest = (unsigned char *)a;

  i = 0;
  while(i != c)
  {
    dest[i] = b;
    i++;
  }
}


int main()
{
  char a[20] = "";
  char t[20] = "";
  int b = '*';
  int c = 2;
  
  memset(a, 'b', 3 * sizeof(char));
  printf("function string : %s\n", a);

  ft_memset(t, 'b', 3 * sizeof(char));
  printf("function ayoub : %s\n", t);

  // printf("%d\n", ft_isascii(199));
}
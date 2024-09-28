#include <stdio.h>
#include <string.h>

void ft_memset(char *a, int b, unsigned int c)
{
  int i;

  i = 0;
  while(i != c)
  {
    a[i] = b;
    i++;
  }
}


int main()
{
  char a[20] = "";
  char t[20] = "";
  int b = '*';
  int c = 2;
  
  memset(a, '*', 2 * sizeof(char));
  printf("function string : %s\n", a);

  ft_memset(t, '*', 2 * sizeof(char));
  printf("function ayoub : %s\n", t);

  // printf("%d\n", ft_isascii(199));

}

#include <stdio.h>
#include <string.h>

unsigned int ft_strlen(const char *a)
{
  int i;

  i = 0;
  while (a[i] != '\0')
  {
    i++;
  }
  return i;
}

// int main()
// {
//   char a[20] = "ouahidi";
//   char s[20] = "ouahidi";
//   int b = '1';
//   int c = 2;
//   printf("%d\n", ft_strlen(a+1));
//   // memset(a + 1, b,2 * sizeof(char));
//   printf("%s", a);


// }

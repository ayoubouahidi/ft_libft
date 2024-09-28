#include <stdio.h>
#include <string.h>

void ft_bzero(char *a, size_t b)
{
  int i;

  i = 0;
  while (i != b)
  {
    a[i] = '\0';
    i++;
  }

}

// int main()
// {
//   char a[20] = "ayoub";

//   bzero(a + 3, sizeof(char));
//   printf("string's function : %s\n", a);

//   ft_bzero(a + 3, sizeof(char));
//   printf("ayoub's string : %s\n", a);
// }

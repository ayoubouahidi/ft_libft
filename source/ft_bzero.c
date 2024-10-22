#include <stdio.h>
#include <string.h>

void ft_bzero(void *a, size_t b)
{
  int i;
  char *c = (unsigned char *)a;

  i = 0;
  while (i != b)
  {
    c[i] = '\0';
    i++;
  }
}

 int main()
 {
      	 char a[20] = "ayoub";

   bzero(a, sizeof(char) * 2);
   printf("string's function : %s\n", a);

   ft_bzero(a, sizeof(char) * 2);
   printf("ayoub's string : %s\n", a);
 }

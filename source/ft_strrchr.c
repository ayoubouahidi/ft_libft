#include <stdio.h>
#include <string.h>
#include "libft.h"

const char *ft_strrchr(const char *str, int c)
{
  int i;
  int lenstr;

  lenstr = ft_strlen(str);
  i = lenstr;
  while (str[i] != '\0')
  {
    if(str[i] == c)
      return (&str[i]);
    i--;
  }
  return NULL;
}

 int main()
 {
   char str[20] = "esayoubaes";

   printf("string's function : %s\n", strrchr(str, 't'));
   printf("ayoub's function : %s\n", strrchr(str, 't'));
 }

#include <stdio.h>
#include "libft.h"

int main()
{
  //*****  this for atoi
  // char *str = "+123ayoub";
  // printf("the atoi function output : %d\n", ft_atoi(str));
  //*****  this test for substr
  char *str = "ayoub ouahidi";
  char *newstr = ft_substr(str, 5, 5);
  printf("the string's is : %s\n", newstr);

}

// ********test memcpy

// int main()
// {
//   char src[] = "ay";
//   char dest_a[5];

//   ft_memcpy(dest_a,src, 2);
//   // memcpy(dest_a,src,2);
//   printf("ayoub's function : %s\n", dest_a);
// }

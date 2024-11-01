#include <stdio.h>
#include "libft.h"

int main()
{
   char *str1 = "ayoub ouahidi";
   char *str2 = " 22ans";
  //*****  this for atoi
  // char *str = "+123ayoub";
  // printf("the atoi function output : %d\n", ft_atoi(str));
  //*****  this test for substr
 
  // char *newstr = ft_substr(str, 0, 20);
  // printf("the string's is : %s\n", newstr);

  // ***** this test is for strjoin !
  printf("ayoub's function : %s\n", ft_strjoin(str1, str2));

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

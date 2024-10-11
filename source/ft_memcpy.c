#include <stdio.h>
#include <string.h>
#include "libft.h"

void ft_memcpy(void *dest, const void *src, size_t numByte)
{
  int i;
  char *newDest = (unsigned char *)dest;
  const char * newSrc = (const unsigned char *)src;

  i = 0;
  while (i < numByte)
  {
    newDest[i] = newSrc[i]; 
    i++;
  }
  if (i < numByte)
  {
    newDest[i] = '\0';
  }
}


int main()
{
 
  char src[] = "Ayoub Ouahidi";
  char dest_s[] = "";
  char dest_a[] = "";

  memcpy(src + 2, src, 4);
  ft_memcpy(src + 2,src, 4);
  printf("string's function : %s\n", src);
  printf("ayoub's function : %s\n", src);

  // ft_memcpy(dest_4, src_4, 2);
  // printf("ayoub's function : %s\n", dest_4);

  // ft_memcpy(dest_3, src_3, 2);
  // printf("ayoub's function : %s\n", dest_3);

  // memcpy(dest_s, src, 4);
  // printf("string's function : %s\n", dest_s);
  // ft_memcpy(dest_a, src, 4);
  // printf("string's function : %s\n", dest_a);
}

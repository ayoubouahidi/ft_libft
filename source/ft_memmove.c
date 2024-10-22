#include <stdio.h>
#include <string.h>
#include "libft.h"

int ft_memmove(void *dest, const void *src, size_t numByte)
{
  int i;
  int j;
  char *newdest = (unsigned char *)dest;
  const char *newSrc =(const unsigned char *)src;
  char *tmp;

  // if(numByte > ft_strlen(newSrc))
  //   return 0;
  if((newdest > newSrc && newdest < newSrc + numByte))
  {
    i = numByte;
  }else{
    i = 0;
    while (i < numByte)
    {
      newdest[i] = newSrc[i];
      i++;
    }
  }
}


int main()
{
  char src[]  = "123456";
  char dest_s[] = "ayo";
  char dest_a[] = "ayo";

  memmove(dest_s, src, 5);
  printf("string's function : %s\n", dest_s);
  ft_memmove(dest_a, src, 5);
  printf("ayoub's function : %s\n", dest_a);
}

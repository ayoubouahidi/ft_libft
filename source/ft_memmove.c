#include <stdio.h>
#include <string.h>

int ft_memmove(void *dest, const void *src, size_t numByte)
{
  int i;
  char *newdest = (unsigned char *)dest;
  const char *newSrc =(const unsigned char *)src;
  
  i = 0;
  while (i < numByte)
  {
    
  }

}

int main()
{
  char src[20]  = "";
  char dest_s[20] = "";
  char dest_a[20];

  memmove(dest_s, src, 6);
  printf("string's function : %s\n", dest_s);
  // ft_memmove(dest_a, src, 4);
  // printf("string's function : %s\n", dest_a);
}

#include <stdio.h>
#include <string.h>

void ft_memcpy(char *dest, char *src, unsigned int n)
{
  int i;

  i = 0;
  while (i != n)
  {
    dest[i] = src[i]; 
    i++;
  }
  // dest[i] = '\0';
}


int main()
{
  // char src[20] = "ayoub ouahidi";

  char dest[20] ;
  char src_2[20] = "ayoub ouahidi";
  char dest_2[20] ;

  char src_3[20] =  "ayoub ouahidi";
  char dest_3[20] ;

  char src_4[20] = "ouahidi ayoub";
  char dest_4[20] = "0123456789";

  char src[20] = "ouahidi ayoub";
  char dest_s[20] = "0123456789";
  char dest_a[20] = "0123456789";

  // memcpy(dest_4, src_4, 2);
  // // dest[2] = '\0';
  // printf("string's function : %s\n", dest);

  // ft_memcpy(dest_4, src_4, 2);
  // printf("ayoub's function : %s\n", dest_4);

  // ft_memcpy(dest_3, src_3, 2);
  // printf("ayoub's function : %s\n", dest_3);

  memcpy(dest_s, src, 4);
  printf("string's function : %s\n", dest_s);
  ft_memcpy(dest_a, src, 4);
  printf("string's function : %s\n", dest_a);
}

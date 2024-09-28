#include<stdio.h>
#include<string.h>

const char *ft_strchr(const char *str, int c)
{
  int i;
  i = 0;
  while (str[i] != '\0')
  {
    if(str[i] == c)
      return (&str[i]);
    i++;
  }
  return NULL;
}

// int main()
// {
//   char str[20] = "youb";
//   printf("string's function : %s\n", strchr(str, 'a'));
//   printf("ayoub's function : %s\n", strchr(str, 'a'));
// }

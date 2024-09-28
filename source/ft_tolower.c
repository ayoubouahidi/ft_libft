#include<stdio.h>
#include<ctype.h>
int ft_tolower(int c)
{
  if(c >= 65 && c <= 90)
    return (c + 32);
  return (c);
}
// int main()
// {
//   printf("ctype's function : %c \n", tolower('A'));
//   printf("ayoub's function : %c \n", ft_tolower('A'));
// }

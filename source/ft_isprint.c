#include <ctype.h>
#include <stdio.h>
int ft_isprint(int a)
{
  if (a >= 32 && a < 127)
    return 1;
  return 0;

}
// int main()
// {
//   printf("%d\n",isprint(2));
//   printf("%d\n",ft_isprint(2));
// }

#include <ctype.h>
#include <stdio.h>
int ft_isdigit(int a)
{
  if ((a >= 48 && a <= 57))
  {
    return 1;
  }
  return 0;
}

/*test*/
// int main()
// {
//   printf("%d\n", isdigit('9'));
//   printf("%d\n", ft_isdigit('9'));
// }

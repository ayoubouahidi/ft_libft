#include <ctype.h>
#include <stdio.h>

int ft_isalpha(int a)
{
  if ((a >= 65 && a <= 90) ||(a >= 97 && a <= 122))
  {
    return 1;
  }
  return 0;
  
}
/*test a supprimer*/

// int main()
// {
//   char a = 'z';
//   printf("%d\n", isalpha(a));
//   printf("%d\n", ft_isalpha(a));
//   if (ft_isalpha(a))
//   {
//     printf("true\n");
//   }
//   else
//   {
//     printf("false\n");
//   }
// }

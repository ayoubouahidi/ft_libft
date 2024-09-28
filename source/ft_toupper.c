#include <stdio.h>
#include <string.h>
#include<ctype.h>
int ft_toupper(int c){
  if (c >= 97 && c <= 122)
    return (c - 32);
  return (c);
}
// int main()
// {
//   printf("ctype's function : %c\n",toupper('z'));
//   printf("ctype's function : %c\n",ft_toupper('z'));
// }

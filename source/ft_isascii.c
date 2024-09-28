#include <ctype.h>
#include <stdio.h>
int ft_isascii(int a)
{
	if (a >= 1 && a <= 127)
		return 1;
	return 0;
}
// int main()
// {
//   printf("%d\n", ft_isascii(199));
//   printf("%d\n", isascii(199));
// }

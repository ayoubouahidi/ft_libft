#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int ft_isalnum(int a)
{
	if (ft_isalpha(a) || ft_isdigit(a))
		return 1;
	return 0;
}

// int main()
// {
// 	printf("%d\n", ft_isalnum('q'));
// 	printf("%d\n", isalnum('q'));
// }

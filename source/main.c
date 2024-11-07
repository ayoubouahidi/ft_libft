#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

// int main()
// {
//    char *str1 = "ayoub ouahidi";
//    char *str2 = " 22ans";
//   //*****  this for atoi
//   char *str = "++33ayoub";
//   printf("the atoi function output : %d\n", ft_atoi(str));
//   //*****  this test for substr
 
//   // char *newstr = ft_substr(str, 0, 20);
//   // printf("the string's is : %s\n", newstr);

//   // ***** this test is for strjoin !
//   printf("ayoub's function : %s\n", ft_strjoin(str1, str2));

// }

// ********test memcpy

// int main()
// {
//   char src[] = "ay";
//   char dest_a[5];

//   ft_memcpy(dest_a,src, 2);
//   // memcpy(dest_a,src,2);
//   printf("ayoub's function : %s\n", dest_a);
// }
// int main()
// {
// 	char *str = "!+payo ub+ouahidi+++!";
// 	char *set = "!+";
// 	char *newstr = ft_strtrim(str, set);
// 	printf("the size is : %s\n", newstr);
// }

// int main()
// {
// 	char **tab;
// 	*tab = (char *)malloc(sizeof(char) * 3);
// 	tab[0] = "ayoub";
// 	tab[1] = "ouahidi";
// 	tab[2] = "22ans";
// 	printf("tab est : %s\n", *tab);
// }

// split function 
// int main()
// {
//   char *str = "ouahidi+ayoub+22ans";
//   size_t i;
//   char **result = ft_split(str, '+');
//   i = 0;
//   while (result[i] != NULL)
//   {
//     printf("%s\n", result[i]);
//     i++;
//   }
// }

void ft_toupper(unsigned int i, char *c) {
	(void)i;
	if (*c >= 'a' && *c <= 'z')
	{ 
		*c = *c - 32; 
	}
}

int main()
{
	char s[] = "ayoub 19";
	ft_striteri(s, ft_toupper);
	printf("string : %s\n", s);
}

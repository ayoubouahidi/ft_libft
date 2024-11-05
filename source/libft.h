
#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>
int	ft_isalpha(int a);
int	ft_isdigit(int a);
int ft_isascii(int a);
unsigned int ft_strlen(const char *a);
void	*ft_memcpy(void *dest, const void *src, size_t numByte);
void	*ft_memset(void *a, int b, size_t c);
void	*ft_memmove(void *dest, const void *src, size_t numByte);
int	ft_atoi(char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *str, int c);
char *ft_strtrim(char const *s1, char const *set);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char *ft_strdup(const char *s);
char 	**ft_split(char const *s, char c);

#endif

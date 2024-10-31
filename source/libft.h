#ifndef LIBFT_H
# define LIBFT_H

int	ft_isalpha(int a);
int	ft_isdigit(int a);
int ft_isascii(int a);
unsigned int ft_strlen(const char *a);
void	*ft_memcpy(void *dest, const void *src, size_t numByte);
void	*ft_memset(void *a, int b, size_t c);
int	ft_atoi(char *str);

#endif

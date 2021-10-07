#include <stdlib.h>
#include <string.h>
int 	ft_atoi(char *element);
void	bzero(void	*s, size_t n);
int 	ft_isalpha(char element)
int 	ft_isprint(int c);
int 	ft_isalnum(char element);
int 	ft_isdigit(char	*element);
int		ft_isascii(int c);
int 	memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *destination, const void *source, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(char	*string);
int 	strncmp(const char *str1, const char *str2, size_t n)
char	ft_toupper(char	*string);
char	ft_tolower(char	*string);
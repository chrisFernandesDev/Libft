#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int n);
int	ft_isalnum(int nS);
int	ft_isascii(int nbr);
int	ft_isprint(int nbr);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
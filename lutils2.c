#include "minishell.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

int	*ft_strchr2(const char *s,	int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c && *s + 1 == (char)c)
		return (1);
	return (0);
}
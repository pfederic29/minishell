#include "minishell.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s && *s)
	{
		len++;
		s++;
	}
	return (len);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	return (ft_strlen(src));
}

static int	ft_wcount(char const *s, char c)
{
	int	count;

	count = 0;
	while (s && *s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static char	**free_split(char **array)
{
	int	i;

	i = 0;
	while (array && array[i])
		free(array[i++]);
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	*start;
	char	**array;

	array = malloc((ft_wcount(s, c) + 1) * sizeof(char *));
	if (!s || !array)
		return (free_split(array));
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			start = (char *)s;
			while (*s && *s != c)
				s++;
			array[i] = malloc((s - start) + 1);
			if (!array[i])
				return (free_split(array));
			ft_strlcpy(array[i++], start, s - start + 1);
		}
		else
			s++;
	}
	array[i] = 0;
	return (array);
}
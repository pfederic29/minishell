#ifndef MINISHELL_H
# define MINISHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <unistd.h>
#include <readline/readline.h>
#include <readline/history.h>

/*typedef struct	s_struct
{
	char *cmd;
	char **argo;
}				t_struct;*/
void ft_loop();
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
static int	ft_wcount(char const *s, char c);
static char	**free_split(char **array);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *s);

#endif


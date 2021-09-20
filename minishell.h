#ifndef MINISHELL_H
# define MINISHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <unistd.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <sys/types.h>
#include <sys/wait.h>

typedef struct	s_struct
{
	char *line;
	char **cmd;
	char **argo;
	char **matrix;
	int pipe;
	int red;
	int double_red;

}				t_struct;

void ft_loop(t_struct *data);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
static int	ft_wcount(char const *s, char c);
static char	**free_split(char **array);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *s);
void	ft_check_chekka(t_struct *data);
int	*ft_strchr2(const char *s,	int c);

#endif


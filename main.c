#include "minishell.h"

void ft_loop()
{
	const char *line;
	char **args;
	int status;
	int j = 0;

	while (1)
	{
		j = 0;
		printf("pipposhell> ");
		line = readline(line);
		args = ft_split(line, ' ');
		//status = ft_exec();
		
		//printf("%s\n", line);
		
	}
	
}

int main()
{
	ft_loop();
	return (1);
}
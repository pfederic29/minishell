#include "minishell.h"

void ft_loop(t_struct *data)
{
	// const char *line;
	// char **matrix;
	int status;
	int j = 0;

	while (1)
	{
		j = 0;
		printf("pipposhell> ");
		data->line = readline(data->line);
		ft_check_chekka(data);
		ft_cmd_args(data);
		// printf("%s\n", data->line);
		// while (data->matrix[j])
		// {
		// 	printf("%s\n", data->matrix[j]);
		// 	j++;
		// }
		// matrix = ft_splitd(ata->line, ' ');
		// if (strchr(data->line, '|'))
		
	}	
}

void	ft_check_red(t_struct *data, char c)
{
	if (ft_strchr2(data->line, c))
		data->double_red = 1;
	else
		data->red = 1;
	
} 

void	ft_check_chekka(t_struct *data)
{
	if (strchr(data->line, '|'))
	{
		data->matrix = ft_split(data->line, '|');
		data->pipe = 1;
	}
	else if (strchr(data->line, '>'))
	 	ft_check_red(data, '>'); // famo cose fighe
	else if (strchr(data->line, '<'))
	 	ft_check_red(data, '<'); // famo cose fighe	
	else
		data->matrix = ft_split(data->line, ' ');
}

void ft_cmd_args(t_struct *data);
{
	int j = 0;

	if(data->pipe == 0 && data->red == 0 && data->double_red == 0)
	{
		data->cmd[j] == data->matrix[0];
		j++;
		while(data->matrix[j])
		{
			data->args[j] == data->matrix[j];
			j++;
		}
	}

}

int main()
{
	t_struct  data;

	data.red = 0;
	data.pipe = 0;
	data.double_red = 0;
	ft_loop(&data);
	// ft_ex();
	return (1);
}
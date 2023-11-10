/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabeckha <pabeckha@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:49:53 by pabeckha          #+#    #+#             */
/*   Updated: 2023/11/10 11:00:53 by pabeckha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_swap_char(char **array, int index1, int index2);

int	main(int argc, char **argv)
{
	int	i;
	int	iter;
	int	cycle;

	i = 1;
	cycle = 1;
	while (cycle <= (argc - 2))
	{
		iter = 1;
		while (iter <= (argc - 2))
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				ft_swap_char(argv, i, i + 1);
			iter++;
			i++;
		}
		cycle++;
		i = 1;
	}
	while (argv[i])
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}

void	ft_swap_char(char **array, int index1, int index2)
{
	char	*temp;

	temp = array[index1];
	array[index1] = array[index2];
	array[index2] = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if ((*s1 || *s2) || (*s1 != *s2))
	{
		while (s1[i] == s2[i])
		{
			i++;
		}
		return (s1[i] - s2[i]);
	}
	else
		return (0);
}

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

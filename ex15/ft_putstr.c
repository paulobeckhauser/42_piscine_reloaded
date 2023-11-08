/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabeckha <pabeckha@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:01:02 by pabeckha          #+#    #+#             */
/*   Updated: 2023/11/08 13:06:36 by pabeckha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_putchar(char c);
// void	ft_putstr(char *str);

// int	main(void)
// {
// 	char	*str;

// 	str = "Hello!";
// 	ft_putstr(str);
// 	return (0);
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

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

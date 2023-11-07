/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabeckha <pabeckha@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:25:07 by pabeckha          #+#    #+#             */
/*   Updated: 2023/11/07 09:33:39 by pabeckha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
// void	ft_is_negative(int n);

// int	main(void)
// {
// 	int	test_value;

// 	test_value = -9;
// 	ft_is_negative(test_value);
// 	return (0);
// }

void	ft_is_negative(int n)
{
	if (n >= 0)
		ft_putchar('P');
	else
		ft_putchar('N');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabeckha <pabeckha@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:43:33 by pabeckha          #+#    #+#             */
/*   Updated: 2023/11/07 19:14:45 by pabeckha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_iterative_factorial(int nb);

// int	main(void)
// {
// 	int	test;
// 	int	factorial_test;

// 	test = 12;
// 	factorial_test = ft_iterative_factorial(test);
// 	printf("%d", factorial_test);
// }

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb == 0)
		result = 1;
	else if (nb < 0 | nb >= 13)
		result = 0;
	else
	{
		i = 1;
		result = 1;
		while (i < nb)
		{
			result = result * (i + 1);
			i++;
		}
	}
	return (result);
}

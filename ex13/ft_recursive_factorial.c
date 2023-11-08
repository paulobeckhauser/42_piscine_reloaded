/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabeckha <pabeckha@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:03:29 by pabeckha          #+#    #+#             */
/*   Updated: 2023/11/08 13:28:01 by pabeckha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_recursive_factorial(int nb);

// int	main(void)
// {
// 	int	test;
// 	int	factorial_test;

// 	test = 0;
// 	factorial_test = ft_recursive_factorial(test);
// 	printf("The factorial of %d(if < 13) is: %d\n", test, factorial_test);
// 	return (0);
// }

int	ft_recursive_factorial(int nb)
{
	if (nb == 1 | nb == 0)
		return (1);
	else if (nb >= 13 | nb < 0)
		return (0);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

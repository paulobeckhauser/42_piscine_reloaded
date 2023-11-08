/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabeckha <pabeckha@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:40:49 by pabeckha          #+#    #+#             */
/*   Updated: 2023/11/08 11:47:09 by pabeckha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <time.h>

// int	ft_sqrt(int nb);

// int	main(void)
// {
// 	int		test;
// 	int		square_root_test;
// 	clock_t	t;
// 	double	time_taken;

// 	test = 900;
// 	t = clock();
// 	square_root_test = ft_sqrt(test);
// 	t = clock() - t;
// 	time_taken = ((double)t) / CLOCKS_PER_SEC;
// 	// in seconds
// 	printf("The square root of %d is: %d\n", test, square_root_test);
// 	printf("%f", time_taken);
// }

int	ft_sqrt(int nb)
{
	int	i;
	int	square;

	i = 0;
	square = 1;
	while (square < nb)
	{
		i++;
		square = i * i;
	}
	if (square == nb)
		return (i);
	else
		return (0);
}

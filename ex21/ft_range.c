/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabeckha <pabeckha@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:50:47 by pabeckha          #+#    #+#             */
/*   Updated: 2023/11/10 15:12:22 by pabeckha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

// int	*ft_range(int min, int max);

// int	main(void)
// {
// 	int	*array_test;
// 	int	minimum;
// 	int	maximum;

// 	array_test = (int *)malloc(sizeof(int) * 10);
// 	minimum = -2;
// 	maximum = 3;
// 	array_test = ft_range(minimum, maximum);
// 	printf("%d", array_test[0]);
// 	printf("%d", array_test[1]);
// 	printf("%d", array_test[2]);
// 	printf("%d", array_test[3]);
// }

int	*ft_range(int min, int max)
{
	int	*array;
	int	len;
	int	i;

	i = 0;
	len = max - min;
	if (len > 0)
	{
		array = (int *)malloc(sizeof(int) * (len + 1));
		while (min < max)
		{
			array[i] = min;
			min++;
			i++;
		}
	}
	else
		array = (int *)malloc(sizeof(int) * (1));
	array[i] = '\0';
	return (array);
}

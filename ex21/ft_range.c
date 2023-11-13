/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabeckha <pabeckha@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:50:47 by pabeckha          #+#    #+#             */
/*   Updated: 2023/11/13 07:56:35 by pabeckha         ###   ########.fr       */
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
// 	int i;

// 	array_test = (int *)malloc(sizeof(int) * 10);
// 	minimum = -20;
// 	maximum = -1;
// 	array_test = ft_range(minimum, maximum);
// 	i = 0;
// 	while(array_test[i] != '\0')
// 	{
// 		printf("%d\n", array_test[i]);
// 		i++;
// 	}
// 	// printf("%d\n", array_test[6]);
// 	return (0);

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
		return (array);
	}
	else
		return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabeckha <pabeckha@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:08:27 by pabeckha          #+#    #+#             */
/*   Updated: 2023/11/08 13:19:44 by pabeckha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

// int	ft_strlen(char *str);
// int	ft_strlen(char *str);

// int	main(void)
// {
// 	char	*string;
// 	int		lenght_ori;
// 	int		lenght_built;

// 	string = "Hellojhkdsahjdsa";
// 	lenght_ori = strlen(string);
// 	lenght_built = ft_strlen(string);
// 	printf("Original function - The size of the string is: %d\n", lenght_ori);
// 	printf("Built function - The size of the string is: %d\n", lenght_built);
// }

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

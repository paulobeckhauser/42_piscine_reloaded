/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabeckha <pabeckha@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:21:28 by pabeckha          #+#    #+#             */
/*   Updated: 2023/11/10 23:40:09 by pabeckha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

// int ft_strcmp(char *s1, char *s2);

// int main(void)
// {
//     char *str1;
//     char *str2;
//     int diff_real;
//     int diff_built;

//     str1 = "dasad";
//     str2 = "";
//     diff_real = strcmp(str1, str2);
// 	printf("The value of using real function is: %d\n", diff_real);
//     diff_built = ft_strcmp(str1, str2);
//     printf("The value of using built function is: %d\n", diff_built);
// }

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (s1 != s2)
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabeckha <pabeckha@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:33:24 by pabeckha          #+#    #+#             */
/*   Updated: 2023/11/10 13:44:23 by pabeckha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// #include <string.h>
// #include <stdio.h>

// char *ft_strdup(char *src);

// int main(void)
// {
//     char *str_original;
//     char *str_duplicate_original;
//     char *str_duplicate_built;

//     str_original = "Hello";
//     str_duplicate_original = strdup(str_original);

//     printf("%s", str_duplicate_original);
//     printf("\n");

//     str_duplicate_built = ft_strdup(str_original);
//     printf("%s", str_duplicate_built);
//     printf("\n");
//     printf("%lu\n", sizeof(str_duplicate_original));
//     printf("%lu\n", sizeof(str_duplicate_built));
// }

char	*ft_strdup(char *src)
{
	char	*dup_char;
	int		i;

	dup_char = (char *)malloc(sizeof(char) * sizeof(src));
	i = 0;
	while (src[i])
	{
		dup_char[i] = src[i];
		i++;
	}
	dup_char[i] = '\0';
	return (dup_char);
}

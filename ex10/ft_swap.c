/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabeckha <pabeckha@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:21:29 by pabeckha          #+#    #+#             */
/*   Updated: 2023/11/07 10:31:39 by pabeckha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// void	ft_swap(int *a, int *b);

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	*ptr1;
// 	int	*ptr2;

// 	ptr1 = &a;
// 	ptr2 = &b;
// 	a = 1;
// 	b = 2;
// 	printf("The value of 'a' is: %d\n", a);
// 	printf("The value of 'b' is: %d\n", b);
// 	ft_swap(ptr1, ptr2);
// 	printf("The value of 'a' is: %d\n", a);
// 	printf("The value of 'b' is: %d\n", b);
// 	return (0);
// }

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

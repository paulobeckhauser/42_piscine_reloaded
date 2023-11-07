/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabeckha <pabeckha@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:25:08 by pabeckha          #+#    #+#             */
/*   Updated: 2023/11/07 16:41:22 by pabeckha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// void    ft_div_mod(int a, int b, int *div, int *mod);

// int main(void)
// {
// 	int	number1;
// 	int	number2;
// 	int	div;
// 	int	mod;
// 	int	*ptr_div;
// 	int	*ptr_mod;

// 	ptr_div = &div;
// 	ptr_mod = &mod;
// 	number1 = 7;
// 	number2 = 3;
// 	ft_div_mod(number1, number2, ptr_div, ptr_mod);
// 	printf("The value in 'div' is: %d\n", div);
// 	printf("The value in 'mod' is: %d\n", mod);
// }

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

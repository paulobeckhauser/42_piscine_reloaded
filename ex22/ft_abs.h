/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabeckha <pabeckha@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:38:59 by pabeckha          #+#    #+#             */
/*   Updated: 2023/11/11 12:04:03 by pabeckha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_abs(int i)
{
	if (i < 0)
		i = -i;
	return (i);
}

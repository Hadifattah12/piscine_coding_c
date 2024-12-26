/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfattah <hfattah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:57:06 by pkahil            #+#    #+#             */
/*   Updated: 2024/05/07 11:37:31 by hfattah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	nb;

	i = 0;
	while (ft_is_printable(str[i]))
		i++;
	i--;
	j = 0;
	while (str[i] && j < 2)
	{
		i--;
		j++;
	}
	j = 0;
	nb = 0;
	while (ft_is_number(str[j]) && j < i)
	{
		nb = nb * 10 + str[j] - '0';
		j++;
	}
	return (nb);
}

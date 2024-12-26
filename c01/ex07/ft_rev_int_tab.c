/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfattah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 00:34:09 by hfattah           #+#    #+#             */
/*   Updated: 2024/04/18 00:34:50 by hfattah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	count;

	count = 0;
	while (count < size / 2)
	{
		tmp = tab[count];
		tab[count] = tab[size - 1 - count];
		tab[size - 1 - count] = tmp;
		count++;
	}
}

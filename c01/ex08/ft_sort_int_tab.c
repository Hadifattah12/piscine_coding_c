/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfattah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 00:41:15 by hfattah           #+#    #+#             */
/*   Updated: 2024/04/19 10:01:56 by hfattah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	count;

	count = 0;
	while (count < size - 1)
	{
		if (tab[count + 1] < tab[count])
		{
			tmp = tab[count + 1];
			tab[count + 1] = tab[count];
			tab[count] = tmp;
			if (count > 0)
			{
				count--;
			}
		}
		else
		{
			count++;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfattah <hfattah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:25:37 by hfattah           #+#    #+#             */
/*   Updated: 2024/04/25 17:52:40 by hfattah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*minmax;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	minmax = (int *)malloc(sizeof(int) * (max - min));
	if (minmax == NULL)
		return (-1);
	else
	{
		i = -1;
		while (++i < max - min)
			minmax[i] = min + i;
		*range = minmax;
		return (i);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfattah <hfattah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:51:43 by hfattah           #+#    #+#             */
/*   Updated: 2024/04/26 09:57:28 by hfattah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*minmax;
	int	size;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	size = max - min;
	minmax = (int *)malloc(sizeof(int) * size);
	while (min < max)
	{
		minmax[i] = min;
		min++;
		i++;
	}
	return (minmax);
}

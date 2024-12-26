/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfattah <hfattah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 14:03:24 by rchalak           #+#    #+#             */
/*   Updated: 2024/04/29 11:50:53 by hfattah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_up_todown(int matrix[4][4], int index, int input[16])
{
	int	i;
	int	tallest;
	int	visible;

	i = 0;
	tallest = 0;
	visible = 0;
	if (index / 4 == 3)
	{
		while (i < 4)
		{
			if (matrix[i][index % 4] > tallest)
			{
				tallest = matrix[i][index % 4];
				visible++;
			}
			i++;
		}
		if (input[index % 4] != visible)
			return (1);
	}
	return (0);
}

int	check_right_toleft(int matrix[4][4], int index, int input[16])
{
	int	i;
	int	tallest;
	int	visible;

	i = 3;
	tallest = 0;
	visible = 0;
	if (index % 4 == 3)
	{
		while (i >= 0)
		{
			if (matrix[index / 4][i] > tallest)
			{
				tallest = matrix[index / 4][i];
				visible++;
			}
			i--;
		}
		if (input[12 + index / 4] != visible)
			return (1);
	}
	return (0);
}

int	check_down_toup(int matrix[4][4], int index, int input[16])
{
	int	i;
	int	tallest;
	int	visible;

	i = 3;
	tallest = 0;
	visible = 0;
	if (index / 4 == 3)
	{
		while (i >= 0)
		{
			if (matrix[i][index % 4] > tallest)
			{
				tallest = matrix[i][index % 4];
				visible++;
			}
			i--;
		}
		if (input[4 + index % 4] != visible)
			return (1);
	}
	return (0);
}

int	check_left_toright(int matrix[4][4], int index, int input[16])
{
	int	i;
	int	tallest;
	int	visible;

	i = 0;
	tallest = 0;
	visible = 0;
	if (index % 4 == 3)
	{
		while (i < 4)
		{
			if (matrix[index / 4][i] > tallest)
			{
				tallest = matrix[index / 4][i];
				visible++;
			}
			i++;
		}
		if (input[8 + index / 4] != visible)
			return (1);
	}
	return (0);
}

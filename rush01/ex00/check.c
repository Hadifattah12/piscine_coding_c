/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfattah <hfattah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 14:04:26 by rchalak           #+#    #+#             */
/*   Updated: 2024/04/28 17:49:55 by hfattah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_left_toright(int matrix[4][4], int index, int input[16]);
int	check_right_toleft(int matrix[4][4], int index, int input[16]);
int	check_down_toup(int matrix[4][4], int index, int input[16]);
int	check_up_todown(int matrix[4][4], int index, int input[16]);

int	check_case(int matrix[4][4], int index, int input[16])
{
	if (check_left_toright(matrix, index, input))
		return (1);
	if (check_right_toleft(matrix, index, input))
		return (1);
	if (check_down_toup(matrix, index, input))
		return (1);
	if (check_up_todown(matrix, index, input))
		return (1);
	return (0);
}

int	check_double(int matrix[4][4], int index, int num)
{
	int	i;

	i = 0;
	while (i < index / 4)
	{
		if (matrix[i][index % 4] == num)
			return (1);
		i++;
	}
	i = 0;
	while (i < index % 4)
	{
		if (matrix[index / 4][i] == num)
			return (1);
		i++;
	}
	return (0);
}

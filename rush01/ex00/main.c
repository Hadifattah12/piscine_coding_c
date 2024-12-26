/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfattah <hfattah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 14:03:05 by rchalak           #+#    #+#             */
/*   Updated: 2024/04/29 12:15:00 by hfattah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_double(int matrix[4][4], int pos, int num);
int		check_case(int matrix[4][4], int pos, int input[16]);
int		check(int ac, char *argv[]);
int		get_numbers(char argv[], int *input);
void	message_error(void);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);

int	solve(int matrix[4][4], int input[16], int index)
{
	int	num;

	if (index == 16)
		return (1);
	num = 1;
	while (num <= 4)
	{
		if (check_double(matrix, index, num) == 0)
		{
			matrix[index / 4][index % 4] = num;
			if (!check_case(matrix, index, input))
			{
				if (solve(matrix, input, index + 1))
					return (1);
			}
			else
				matrix[index / 4][index % 4] = 0;
		}
		num++;
	}
	return (0);
}

void	display_solution(int matrix[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putnbr(matrix[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	matrix_init(int matrix[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			matrix[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{	
	int	matrix[4][4];
	int	*input;

	input = malloc(4 * 16);
	matrix_init(matrix);
	if (check(argc, argv) && get_numbers(argv[1], input))
	{
		if (solve(matrix, input, 0) == 1)
		{
			display_solution(matrix);
		}
		else
		{
			message_error();
		}
	}
	else
	{
		message_error();
	}
	free(input);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfattah <hfattah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:09:28 by hfattah           #+#    #+#             */
/*   Updated: 2024/04/21 15:54:45 by hfattah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_top_bottom(int x);
void	ft_middle(int x);

void	ft_top_bottom(int x)
{
	int	xcounter;

	xcounter = 1;
	while (xcounter <= x)
	{
		if (xcounter == 1)
		{
			ft_putchar('A');
		}
		else if (xcounter == x)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		xcounter++;
	}
}

void	ft_middle(int x)
{
	int	xcounter;

	xcounter = 1;
	while (xcounter <= x)
	{
		if (xcounter == 1)
		{
			ft_putchar('B');
		}
		else if (xcounter == x)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		xcounter++;
	}
}

void	rush(int x, int y)
{
	int	ycounter;

	if (x <= 0 || y <= 0)
	{
		write(1, "Please input 2 positive integers grater then 0\n", 48);
		return ;
	}
	ycounter = 1;
	while (ycounter <= y)
	{
		if (ycounter == 1 || ycounter == y)
		{
			ft_top_bottom(x);
		}
		else
		{
			ft_middle(x);
		}
		ycounter++;
		ft_putchar('\n');
	}
}

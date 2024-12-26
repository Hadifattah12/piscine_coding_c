/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfattah <hfattah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 02:09:26 by hfattah           #+#    #+#             */
/*   Updated: 2024/04/21 17:22:24 by hfattah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_top_bottom(int x);
void	ft_middle(int x);

void	first(int x)
{
	int	xcounter;

	xcounter = 1;
	while (xcounter <= x)
	{
		if (xcounter == 1)
		{
			ft_putchar('/');
		}
		else if (xcounter == x)
		{
			ft_putchar('\\');
		}
		else
		{
			ft_putchar('*');
		}
		xcounter++;
	}
}

void	last(int x)
{
	int		xcounter;

	xcounter = 1;
	while (xcounter <= x)
	{
		if (xcounter == 1)
		{
			ft_putchar('\\');
		}
		else if (xcounter == x)
		{
			ft_putchar('/');
		}
		else
		{
			ft_putchar('*');
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
			ft_putchar('*');
		}
		else if (xcounter == x)
		{
			ft_putchar('*');
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
		write(1, "Please input 2 positive integers greater then 0\n", 48);
		return ;
	}
	ycounter = 1;
	while (ycounter <= y)
	{
		if (ycounter == 1)
		{
			first(x);
		}
		else if (ycounter == y)
		{
			last(x);
		}
		else
		{
			ft_middle(x);
		}
		ycounter++;
		ft_putchar('\n');
	}
}

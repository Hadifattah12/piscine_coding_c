/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfattah <hfattah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:59:33 by achamsin          #+#    #+#             */
/*   Updated: 2024/04/21 15:54:03 by hfattah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);
void	ft_top(int x);
void	ft_bottom(int x);
void	ft_middle(int x);

void	rush(int x, int y)
{
	int	ycount;

	if (x <= 0 || y <= 0)
	{
		write(1, "Please input 2 positive integers grater then 0\n", 48);
		return ;
	}
	ycount = 1;
	while (ycount <= y)
	{
		if (ycount == 1)
		{
			ft_top(x);
		}
		else if (ycount == y)
		{
			ft_bottom(x);
		}
		else
		{
			ft_middle(x);
		}
		ycount++ ;
		ft_putchar('\n');
	}
}

void	ft_top(int x)
{
	int	xcount;

	xcount = 1;
	while (xcount <= x)
	{
		if (xcount == 1 || xcount == x)
		{
			ft_putchar('A');
		}
		else
		{
			ft_putchar('B');
		}
		xcount++;
	}
}

void	ft_middle(int x)
{
	int	xcount;

	xcount = 1;
	while (xcount <= x)
	{
		if (xcount == 1 || xcount == x)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		xcount++ ;
	}
}

void	ft_bottom(int x)
{
	int	xcount;

	xcount = 1;
	while (xcount <= x)
	{
		if (xcount == 1 || xcount == x)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		xcount++;
	}
}

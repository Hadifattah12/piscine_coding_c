/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfattah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:07:01 by hfattah           #+#    #+#             */
/*   Updated: 2024/04/16 13:42:50 by hfattah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_n(int n)
{
	int	d;

	d = n + '0';
	write(1, &d, 1);
}

void	ft_print_h(int a, int b, int c)
{
	ft_print_n(a);
	ft_print_n(b);
	ft_print_n(c);
	if (a == 7 && b == 8 && c == 9)
	{
		return ;
	}	
	write(1, ",", 1);
	write(1, " ", 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_print_h(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

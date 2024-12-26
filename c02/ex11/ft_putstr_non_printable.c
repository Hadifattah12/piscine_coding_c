/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfattah <hfattah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 08:30:47 by hfattah           #+#    #+#             */
/*   Updated: 2024/04/20 21:12:15 by hfattah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	tmp;
	unsigned char	*cursor;
	unsigned char	*hex_symbols;

	hex_symbols = "0123456789abcdef";
	cursor = (unsigned char *) str;
	while (*cursor != '\0')
	{
		if (*cursor >= ' ' && *cursor <= '~')
			write(1, cursor, 1);
		else
		{
			ft_putchar('\\');
			tmp = *cursor / 16;
			ft_putchar(hex_symbols[tmp]);
			tmp = *cursor % 16;
			ft_putchar(hex_symbols[tmp]);
		}
		cursor++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfattah <hfattah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 08:10:54 by hfattah           #+#    #+#             */
/*   Updated: 2024/04/20 20:31:45 by hfattah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_do_cap(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

char	ft_do_small(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}

int	ft_is_char(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	bol;

	i = 0;
	bol = 1;
	while (str[i] != '\0')
	{
		if (ft_is_char(str[i]) != 1)
		{
			bol = 1;
		}	
		else if (bol)
		{
			str[i] = ft_do_cap(str[i]);
			bol = 0;
		}
		else
		{
			str[i] = ft_do_small(str[i]);
		}	
		i++;
	}
	return (str);
}

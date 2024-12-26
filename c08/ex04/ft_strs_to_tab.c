/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfattah <hfattah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:53:48 by hfattah           #+#    #+#             */
/*   Updated: 2024/04/30 12:03:47 by hfattah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dest = malloc(sizeof(src) * (i + 1));
	i = 0;
	if (dest == NULL)
		return (NULL);
	else
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*tab;
	int				i;

	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		tab[i].size = ft_strlen(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
// #include <stdio.h>
// #include "ft_stock_str.h" 
// #include <stdlib.h>
// struct s_stock_str *ft_strs_to_tab(int ac, char **av);
// int main(int argc, char **argv)
// {
//     struct s_stock_str *result = ft_strs_to_tab(argc, argv);
//     if (result == NULL)
//     {
//         printf("Memory allocation failed.\n");
//         return 1;
//     }
//     printf("Index\tSize\tString\t\tCopy\n");
//     for (int i = 0; result[i].str != 0; i++)
//     {
//         printf("%d\t%d\t%s\t%s\n", i, result[i].size, result[i].str,
//  result[i].copy);
//     }
//     for (int i = 0; result[i].str != 0; i++)
//     {
//         free(result[i].copy);
//     }
//     free(result);
//     return 0;
// }
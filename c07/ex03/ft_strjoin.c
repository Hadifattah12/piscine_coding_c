/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfattah <hfattah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:53:33 by hfattah           #+#    #+#             */
/*   Updated: 2024/04/25 18:43:40 by hfattah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
}

int	calc_size(char **strs, char *sep, int size)
{
	int		i;
	int		len;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * (size - 1);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int		len;
	int		i;

	i = 0;
	if (size == 0)
	{
		ptr = (char *)malloc(sizeof(char));
		*ptr = '\0';
		return (ptr);
	}
	len = calc_size(strs, sep, size);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	ptr[0] = 0;
	while (i < size)
	{
		ft_strcat(ptr, strs[i]);
		if (i < size - 1)
			ft_strcat(ptr, sep);
		i++;
	}
	ptr[len] = '\0';
	return (ptr);
}

// #include <stdio.h>

// int main() {
//     char *strings[] = {"Hello", "world", "of", "programming"};
//     char *separator = ", ";
//     int num_strings = sizeof(strings) / sizeof(strings[0]);

//     char *result = ft_strjoin(num_strings, strings, separator);

//     printf("Concatenated string: %s\n", result);

//     free(result);

//     return 0;
// }

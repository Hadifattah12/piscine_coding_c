/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfattah <hfattah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:01:59 by hfattah           #+#    #+#             */
/*   Updated: 2024/04/25 10:17:32 by hfattah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	negative_count;

	result = 0;
	sign = 1;
	negative_count = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negative_count++;
		str++;
	}
	if (negative_count % 2 == 1)
		sign = -1;
	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (sign * result);
}
// #include <stdio.h>

// int ft_atoi(char *str);

// int main() {

//     int result = ft_atoi("  --+-12ut345");
//     printf("Result: %d\n", result);

//     return 0;
// }

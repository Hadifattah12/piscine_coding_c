/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_argument.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfattah <hfattah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 14:02:31 by rchalak           #+#    #+#             */
/*   Updated: 2024/04/28 17:42:48 by hfattah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	ft_putstr(char *str);

int	check(int argc, char *argv[])
{
	if (argc != 2)
	{
		return (0);
	}
	if (ft_strlen(argv[1]) != 31)
	{
		return (0);
	}
	return (1);
}

int	catch_numbers(char *str, int *input)
{
	while (*str != '\0')
	{
		if ((*str >= '1' && *str <= '4') || *str == ' ')
		{
			if (*str != ' ')
			{
				*input = ft_atoi(str);
				input++;
			}
		}
		else
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int	*get_numbers(char *str, int *input)
{
	int	n;

	n = catch_numbers(str, input);
	if (n == 0)
		return (0);
	return (input);
}

void	message_error(void)
{
	ft_putstr("Error\n");
}

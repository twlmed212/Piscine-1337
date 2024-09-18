/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:11:47 by mtawil            #+#    #+#             */
/*   Updated: 2024/09/16 11:38:16 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	getlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	get_index(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	is_base_valid(char *base)
{
	int	x;
	int	j;

	j = 1;
	x = 0;
	
	while (base[x])
	{
		if ((base[x] == '-')
			|| (base[x] == '+') || (base[x] < 32 && (unsigned char)base[x] > 126))
		{
			return (0);
		}
		while (base[j])
		{
			if (base[x] == base[j])
			{
				return (0);
			}
			j++;
		}
		x++;
	}
	return (1);
}
char *rmv_spaces(char *str, int *sign)
{
	while (*str == ' '
		|| (*str >= 9 && *str <= 13))
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*sign *= -1;
		str++;
	}
	return (str);
}
int	ft_atoi_base(char *str, char *base) // 7D base0f
{
	int	result;
	int	sign;
	int	i;
	int	index;

	index = 0;
	i = 0;
	result = 0;
	sign = 1;
	str = rmv_spaces(str, &sign);
	if (is_base_valid(base) != 0 && getlen(base) > 1)
	{
		while (str[i])
		{
			if (!(get_index(base, str[i]) >= 0))
				break ;
			index = get_index(base, str[i]);
			result = (getlen(base) * result) + index ;
			i++;
		}
		return (result * sign);
	}
	return (0);
}
// int main()
// {
// 	printf("%d\n", ft_atoi_base("    +-14353", "0123456789"));
// 	printf("%d\n", ft_atoi_base("         ---10101001", "01"));
// 	printf("%d\n", ft_atoi_base("     +---59", "0123456789abcdef"));
// 	printf("%d\n", ft_atoi_base("-1111101", "01"));
// 	return 0;
// }
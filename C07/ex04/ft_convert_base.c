/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 23:19:14 by mtawil            #+#    #+#             */
/*   Updated: 2024/09/17 11:12:19 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_putnbr_base(int nbr, char *base, char *res, int index);
int		is_base_valid(char *str);
int		getlen(char *str);

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

char	*rmv_spaces(char *str, int *sign)
{
	while (*str == ' ' || (*str >= 9 && *str <= 13))
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

int	ft_atoi_base(char *str, char *base)
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
			result = (getlen(base) * result) + index;
			i++;
		}
		return (result * sign);
	}
	return (0);
}

int	get_size(long nbr, char *base_to, int size)
{
	if (nbr < 0)
	{
		size += 1;
		nbr *= -1;
	}
	if (nbr >= getlen(base_to))
	{
		size = get_size(nbr / getlen(base_to), base_to, size);
	}
	return (size + 1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		size;
	char	*res;

	size = 0;
	if (!nbr)
		return (0);
	if (!is_base_valid(base_from) || !is_base_valid(base_to))
		return (NULL);
	size = get_size(ft_atoi_base(nbr, base_from), base_to, size);
	res = (char *)malloc((size + 1) * sizeof(char));
	if (!res)
		return (NULL);
	ft_putnbr_base(ft_atoi_base(nbr, base_from), base_to, res, size - 1);
	res[size] = '\0';
	return (res);
}

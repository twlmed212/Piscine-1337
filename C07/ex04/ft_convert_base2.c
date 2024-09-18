/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 23:19:14 by mtawil            #+#    #+#             */
/*   Updated: 2024/09/17 13:05:52 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int	is_base_valid(char *base)
{
	int	x;
	int	j;

	j = 1;
	x = 0;
	if (getlen(base) <= 1)
		return (0);
	while (base[x])
	{
		if ((base[x] == '-') || (base[x] == '+') || (base[x] >= 9
				&& base[x] <= 13))
			return (0);
		j = x + 1;
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

void	ft_putnbr_base(int nbr, char *base, char *res, int index)
{
	long	bslen;
	long	nbrl;

	nbrl = nbr;
	bslen = getlen(base);
	if (is_base_valid(base) != 0 && bslen > 1)
	{
		if (nbr < 0)
		{
			res[0] = '-';
			nbrl *= -1;
		}
		if (nbrl >= bslen)
		{
			ft_putnbr_base(nbrl / bslen, base, res, index - 1);
		}
		res[index] = base[nbrl % bslen];
	}
}

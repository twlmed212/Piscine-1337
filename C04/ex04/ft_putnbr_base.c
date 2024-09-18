/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:12:01 by mtawil            #+#    #+#             */
/*   Updated: 2024/09/15 16:41:44 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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

void	putcharx(char c)
{
	write(1, &c, 1);
}

int	is_base_valid(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] == '-') || (str[i] == '+') || (str[i] < 32 && (unsigned char)str[i] > 126))
		{
			return (0);
		}
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	if (i <= 1)
	{
		return (0);
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	bslen;
	long	nbrl;

	nbrl = nbr;
	bslen = getlen(base);
	if (is_base_valid(base) != 0 && bslen > 1)
	{
		if (nbrl < 0)
		{
			putcharx('-');
			nbrl *= -1;
		}
		if (nbrl >= bslen)
		{
			ft_putnbr_base(nbrl / bslen, base);
		}
		putcharx(base[nbrl % bslen]);
	}
}

// int main()
// {
// 	ft_putnbr_base(125, "hrfv");
// 	write(1, "\n", 1);
// 	// ft_putnbr_base(-125, "poneyvif");
// 	// write(1, "\n", 1);
// 	// ft_putnbr_base(-125, "0123456789");
// 	// write(1, "\n", 1);
// 	// ft_putnbr_base(-125, "01234567");
// 	// write(1, "\n", 1);
// 	// ft_putnbr_base(-125, "");
// 	return 0;
// }
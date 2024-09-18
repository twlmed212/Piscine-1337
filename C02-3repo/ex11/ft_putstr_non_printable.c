/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:09:56 by mtawil            #+#    #+#             */
/*   Updated: 2024/09/01 13:10:25 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h> // comment this only

void	tohex(int nb)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, &hex[nb / 16], 1);
	write(1, &hex[nb % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 0) && (str[i] <= 31))
		{
			write(1, "\\", 1);
			tohex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
// int	main(void)
// {
// 	char x;
// 	x = 'ab\ncd';
// 	ft_putstr_non_printable(&x);
// 	return (0);
// }
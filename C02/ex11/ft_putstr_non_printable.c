/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:09:56 by mtawil            #+#    #+#             */
/*   Updated: 2024/09/17 14:53:11 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
		if (str[i] == 127 || (str[i] >= 0 && str[i] <= 31))
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

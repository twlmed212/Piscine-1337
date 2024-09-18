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

//#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (src[i])
	{
		dest[count] = src[i];
		i++;
		count++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	get_hex(int nmbr)
{
	char	hex[16];

	ft_strcpy(hex, "0123456789abcdef");
	ft_putchar(hex[nmbr / 16]);
	ft_putchar(hex[nmbr % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 0) && (str[i] <= 31))
		{
			ft_putchar('\\');
			get_hex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
/*
int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	return (0);
}
*/
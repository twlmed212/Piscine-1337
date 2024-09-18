/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:56:07 by mtawil            #+#    #+#             */
/*   Updated: 2024/09/17 15:32:41 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	putstr(char *str, int index, int size);
void	puthex(char *str, int index);
void	putaddr(int nbr);
void	*ft_print_memory(void *addr, unsigned int size);

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	*str;
	unsigned int	i;

	str = (char *) addr;
	i = 0;			// 0           16
	while(i < size) // abcdefsjfklsjflksdjfkldjs / 30  
	{
		putaddr(i);	
		putchar(':');

		puthex(str, i);
		putchar(' ');
		putchar(' ');

		i += putstr(str, i, size);
		putchar('\n');
	}
	return (addr);
}

void	putaddr(int nbr)
{
	static	int checked;
	char	*base = "0123456789abcdef";
	int	nbase;
	int	i;
	int	len;

	len = 1;
	i = nbr;
	nbase = 16;
	while ((i /= 16) && !checked)
		len++;
	i = 0;
	if (!checked)
	{
		checked = 1;
		while (i++ < (8 - len))
			putchar('0');
	}
	if (nbr >= nbase)
		putaddr(nbr / nbase);
	putchar(base[nbr % nbase]);
	checked = 0;
}

void     puthex(char *str, int index)
{
	char	*hex = "0123456789abcdef";

	int	byte = 0;
	while (byte < 16)
	{
		if (byte % 2 == 0)
			putchar(' ');
		if (str[byte] > 16)
		{
			putchar(hex[str[byte + index] / 16]);
			putchar(hex[str[byte + index] % 16]);	
		}
		else
		{
			putchar('0');
			putchar(hex[str[byte + index] % 16]);
		}
		byte++;
	}
}

int	putstr(char *str, int index, int size)
{
	int	done;
	int	byte;
	int	i;

	byte = 0;
	done = 0;
	while (byte < 16)
	{
		i = index + byte;
		if (str[i] == '\0')
			done = 1;
		if ((str[i] >= '!' && str[i] <= '~') || str[i] == ' ')
			putchar(str[i]);
		else
			putchar('.');
		byte++;
	}
	if (done)
		return (size);
	return (byte);
}
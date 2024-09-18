/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 20:28:11 by mtawil            #+#    #+#             */
/*   Updated: 2024/09/17 09:58:12 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

unsigned int	getlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srclen;
	unsigned int	destlen;
	unsigned int	y;

	i = 0;
	destlen = getlen(dest);
	y = getlen(dest);
	srclen = getlen(src);
	if (destlen >= size)
		return (size + srclen);
	while (src[i] && y < size - 1)// mohamed said 2
	{
		dest[y] = src[i];
		y++;
		i++;
	}
	dest[y] = '\0';
	return (srclen + destlen);
}
int main()
{
	char *src = "Welcomohedm ";
	unsigned int c;
	char dest[15] = "Mohamed";
	c = ft_strlcat(dest, src, 2);
	printf("%s| - %d\n----------\n", dest, c);

	char dest2[20] = "Welcomohedm ";
	c = strlcat(dest2, src, 2);
	printf("%s| - %d\n----------\n", dest2, c);

	return 0;
}
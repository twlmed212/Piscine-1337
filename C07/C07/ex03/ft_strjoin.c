/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 23:34:15 by mtawil            #+#    #+#             */
/*   Updated: 2024/09/16 17:46:20 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	getlen(char *str)
{
	unsigned int	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}

int	get_total_length(int size, char **strs, char *sep)
{
	int	i;
	int	stringlen;

	i = 0;
	stringlen = 0;
	while (i < size)
	{
		stringlen += getlen(strs[i]);
		i++;
	}
	return (stringlen + (size - 1) * getlen(sep));
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	destlen;

	destlen = getlen(dest);
	i = 0;
	while (src[i])
	{
		dest[destlen] = src[i];
		i++;
		destlen++;
	}
	dest[destlen] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;

	i = 0;
	if (size == 0)
	{
		result = (char *)malloc(1 * sizeof(char));
		result[0] = '\0';
		return (result);
	}
	result = (char *)malloc((get_total_length(size, strs, sep) + 1)
			* sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	result[0] = '\0';
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i != size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}

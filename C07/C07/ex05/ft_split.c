/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:17:18 by mtawil            #+#    #+#             */
/*   Updated: 2024/09/16 18:06:48 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	skip_sep(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	**st_split(char *str, char *charset, char **res_array, char *start)
{
	int	index;

	index = 0;
	while (*str)
	{
		if (!skip_sep(*str, charset))
		{
			start = str;
			while (*str && !skip_sep(*str, charset))
				str++;
			res_array[index] = (char *)malloc((str - start + 1) * sizeof(char));
			if (!res_array[index])
				return (NULL);
			ft_strncpy(res_array[index], start, str - start);
			res_array[index][str - start] = '\0';
			index++;
		}
		else
			str++;
	}
	res_array[index] = NULL;
	return (res_array);
}

int	count_string_size(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (!skip_sep(*str, charset))
		{
			count++;
			while (*str && !skip_sep(*str, charset))
				str++;
		}
		else
			str++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**res_array;

	res_array = (char **)malloc((count_string_size(str, charset) + 1)
			* sizeof(char *));
	if (!res_array)
		return (NULL);
	return (st_split(str, charset, res_array, str));
}

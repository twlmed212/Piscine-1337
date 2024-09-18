/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:42:50 by mtawil            #+#    #+#             */
/*   Updated: 2024/09/16 13:05:49 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] && s1[2]) && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	printparam(int length, char **args)
{
	int	i;
	int	x;

	i = 0;
	x = 1;
	while (x < length)
	{
		i = 0;
		while (args[x][i] != '\0')
		{
			write(1, &args[x][i], 1);
			i++;
		}
		write(1, "\n", 1);
		x++;
	}
}

void	sortparam(int i, int j, int length, char **args)
{
	char	*temp;

	while (i < length)
	{
		j = i+1;
		while (j < length)
		{
			if (ft_strcmp(args[i], args[j]) > 0)
			{
				temp = args[i];
				args[i] = args[j];
				args[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int length, char **args)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	sortparam(i, j, length, args);
	printparam(length, args);
	return (0);
}

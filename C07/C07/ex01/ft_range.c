/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 15:00:36 by mtawil            #+#    #+#             */
/*   Updated: 2024/09/16 15:37:47 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	size;
	int	i;

	size = max - min;
	i = 0;
	if (min >= max)
		return (NULL);
	tab = (int *)malloc(size * sizeof(int));
	while (i < size)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

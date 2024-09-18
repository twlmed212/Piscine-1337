/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 11:23:15 by mtawil            #+#    #+#             */
/*   Updated: 2024/08/30 11:43:26 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	x;
	int	temp;

	i = 0;
	while (tab[i])
	{
		x = i + 1;
		while ((tab[x]) && (x < size))
		{
			if (tab[i] > tab[x])
			{
				temp = tab[i];
				tab[i] = tab[x];
				tab[x] = temp;
			}
			x++;
		}
		i++;
	}
}

int main()
{
	int tab [10] = {9,1,2,3,4,5,6,7,8,0};
	ft_sort_int_tab(tab, 10);
	int i = 0;
	while (tab[i]){
		printf("%d",tab[i]);
		i++;
	}
}
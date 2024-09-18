/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 09:04:09 by mtawil            #+#    #+#             */
/*   Updated: 2024/08/30 10:39:07 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	temp;

	while (count < size / 2)
	{
		temp = tab[count];
		tab[count] = tab[size - (count + 1)];
		tab[size - (count + 1)] = temp;
	}
}

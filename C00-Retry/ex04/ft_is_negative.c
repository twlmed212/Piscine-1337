/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:52:06 by mtawil            #+#    #+#             */
/*   Updated: 2024/08/28 20:24:55 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	p;
	char	ng;

	p = 'P';
	ng = 'N';
	if (n < 0)
	{
		write(1, &ng, 1);
	}
	else
	{
		write(1, &p, 1);
	}
}

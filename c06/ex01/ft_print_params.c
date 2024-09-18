/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:43:49 by mtawil            #+#    #+#             */
/*   Updated: 2024/09/11 21:16:59 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int length, char **args)
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
	return (0);
}

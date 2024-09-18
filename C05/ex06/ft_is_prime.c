/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 09:28:38 by mtawil            #+#    #+#             */
/*   Updated: 2024/09/11 10:51:19 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main()
// {
// 	printf("%d yes \n", ft_is_prime(7));
// 	printf("%d yes \n", ft_is_prime(5));
// 	printf("%d no \n", ft_is_prime(8));
// 	printf("%d yes\n", ft_is_prime(11));
// 	return 0;
// }
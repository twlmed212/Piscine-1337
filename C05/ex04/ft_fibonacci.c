/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 21:13:51 by mtawil            #+#    #+#             */
/*   Updated: 2024/09/11 11:14:55 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <st dio.h>
int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 1 || index == 0)
	{
		return (index);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
// int main()
// {
// 	printf("%lld\n", ft_fibonacci(-5));
// 	return 0;
// }
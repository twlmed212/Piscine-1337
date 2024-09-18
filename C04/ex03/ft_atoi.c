/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 09:54:54 by mtawil            #+#    #+#             */
/*   Updated: 2024/09/15 15:37:32 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	result;
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' '
		|| (str[i] >= 9 && str[i] <= 13)) // 
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')//---25l,l,
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')//"    ---125b50"
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
int main()
{
	printf("%d\n", ft_atoi("\f\t\n\v\f\r -12  \n 125"));
	return (0);
}
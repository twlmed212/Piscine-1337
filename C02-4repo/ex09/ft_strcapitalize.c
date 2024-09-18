/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 21:01:13 by mtawil            #+#    #+#             */
/*   Updated: 2024/08/31 21:01:17 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_str_is_alpha(char str)
{
	if ((str >= 'a' && str <= 'z'))
	{
		return (1);
	}
	if ((str >= 'A' && str <= 'Z'))
	{
		return (2);
	}
	if ((str >= '0' && str <= '9'))
	{
		return (3);
	}
	return (0);
}

void	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_str_is_lowercase(str);
	while (str[i])
	{
		if (ft_str_is_alpha(str[i]) == 1 && i - 1 >= 0)
		{
			if (ft_str_is_alpha(str[i - 1]) == 0)
			{
				str[i] -= 32;
			}
		}
		if ((ft_str_is_alpha(str[i]) == 1) && i == 0)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
// int	main(int ac,char  **args)
// {
// 	ft_strcapitalize(args[1]);
// 	printf("%s", args[1]);
// 	return (ac);
// }
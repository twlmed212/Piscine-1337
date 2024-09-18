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

//#include <stdio.h>

int	ft_str_is_alpha(char str)
{
	if ((str >= 'a' && str <= 'z'))
	{
		return (1);
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
		if (ft_str_is_alpha(str[i]) == 1)
		{
			if ((i - 1 >= 0 && str[i - 1] == ' ') || (i == 0))
			{
				str[i] -= 32;
			}
			if (i - 1 >= 0 && (str[i - 1] == '-' || str[i - 1] == '+' ))
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
/*
int	main(int ac,char  **args)
{
	ft_strcapitalize(args[1]);
	int i;

	i = 0;
	while(args[1][i])
	{
		printf("%c", args[1][i]);
		i++;
	}
	return (ac);
}*/
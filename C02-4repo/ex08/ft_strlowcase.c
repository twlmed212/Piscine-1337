/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 19:34:14 by mtawil            #+#    #+#             */
/*   Updated: 2024/08/31 20:41:33 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char str)
{
	if ((str >= 'A' && str <= 'Z'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_str_is_alpha(str[i]) == 1)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
// int	main(int ac,char  **args)
// {
// 	char *str;
// 	str = ft_strlowcase(args[1]);
// 	int i;

// 	i = 0;
// 	while(str[i])
// 	{
// 		printf("%c", str[i]);
// 		i++;
// 	}
// 	return (ac);
// }
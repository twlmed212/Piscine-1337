/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 12:56:35 by mtawil            #+#    #+#             */
/*   Updated: 2024/09/06 11:42:44 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <strings.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	res;
	int	i;

	i = 0;
	res = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
			{
				res = s1[i] - s2[i];
				return (res);
			}
			if (s1[i] < s2[i])
			{
				res = s1[i] - s2[i];
				return (res);
			}
		}
		i++;
	}
	return (res);
}
// int main()
// {
// 	printf("%d\n", ft_strcmp("aa","aa"));

// 	printf("%d\n", strcmp("aa","aa"));
// 	return 0;
// }
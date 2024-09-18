/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:39:12 by mtawil            #+#    #+#             */
/*   Updated: 2024/09/12 21:57:54 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n) // ab a
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
			{
				return (s1[i] - s2[i]);
			}
			if (s1[i] < s2[i])
			{
				return (s1[i] - s2[i]);
			}
		}
		i++;
	}
	return (0);
}
int main()
{
	unsigned int x = 3;
	printf("%d\n", ft_strncmp("abc","abcd", x));

	printf("%d\n", strncmp("abc","abcd", x));
	return 0;
}
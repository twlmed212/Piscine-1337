/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:15:18 by mtawil            #+#    #+#             */
/*   Updated: 2024/09/06 09:17:49 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <strings.h>
// #include <stdio.h>

int	getlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	ltf;

	i = 0;
	ltf = getlen(to_find);
	if (str[0] == '\0' && to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i])
	{
		j = 0;
		while ((str[i + j] == to_find[j]) && (to_find[j]))
		{
			j++;
		}
		if (ltf == j)
			return (str + i);
		i++;
	}
	return (0);
}

// int main()
// {			
// 	char *str = "";
//     char *tofind = "dsd";
//     char *result;
// 	result = ft_strstr(str, tofind);
// 	printf("--> %s\n-----------\n", result);

//     char *result2;
// 	result2 = strstr(str, tofind);
// 	printf("--> %s\n", result2);
//     return 0;
// }
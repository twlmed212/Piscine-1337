/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:51:47 by mtawil            #+#    #+#             */
/*   Updated: 2024/09/06 09:12:44 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <strings.h>

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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	destlen;

	destlen = getlen(dest);
	i = 0;
	while (src[i])
	{
		dest[destlen] = src[i];
		i++;
		destlen++;
	}
	dest[destlen] = '\0';
	return (dest);
}
// int main()
// {
// 	char *mine;
// 	char src1[] = "Hello World!"; // 12
// 	char dest1[15] = {'a','b',};
// 	mine = ft_strcat(dest1, src1);
// 	printf("%s\n", mine);
// 	return 0;
// }

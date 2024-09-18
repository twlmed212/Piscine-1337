/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:08:20 by mtawil            #+#    #+#             */
/*   Updated: 2024/09/06 09:13:49 by mtawil           ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	destlen;

	destlen = getlen(dest);
	i = 0;
	while (src[i] && i < nb)
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
// 	printf("-------Mine------\n");
// 	char *mine;
// 	char src1[] = "Hello World!"; // 12
// 	char dest1[15] = "Mohamed: ";
// 	unsigned int x = 4;
// 	mine = ft_strncat(dest1, src1, x);
// 	printf("%s\n", mine);

// 	printf("-------Original------\n");

// 	char *mine2;
// 	char src2[] = "Hello World!"; // 12
// 	char dest2[15] = "Mohamed: ";
// 	unsigned int x2 = 4;
// 	mine2 = strncat(dest2, src2, x2);
// 	printf("%s\n", mine2);
// 	return 0;
// }
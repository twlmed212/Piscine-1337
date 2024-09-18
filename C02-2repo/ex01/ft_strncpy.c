/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:58:47 by mtawil            #+#    #+#             */
/*   Updated: 2024/08/31 14:49:22 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <strings.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < (int)n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
// int main () {
//     char src[13]  = "12345678910";
//     char dest[15] = "abcdefjh";
// 	printf("-------Mine------\n");
//     ft_strncpy(dest, src, 4);
//     printf("%s\n", dest);
//     printf("\n-------original------\n");
// 	char src2[13]  = "12345678910";
//     char dest2[15] = "abcdefjh";
// 	strncpy(dest2, src2, 4);
// 	printf("%s \n", dest2);
//    return(0);
// }

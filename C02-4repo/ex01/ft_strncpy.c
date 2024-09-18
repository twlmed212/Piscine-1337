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
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
// int main () {
//     char src[13]  = "123";
//     char dest[15] = "";
// 	printf("-------Mine------\n");
//     ft_strncpy(dest, src, 5);
// 	if (dest[3] == '\0'){
// 		printf("Found it\n");
// 	}
//     printf("%s\n", dest);
//     printf("\n-------original------\n");
// 	char src2[13]  = "123";
//     char dest2[15] = "";
// 	strncpy(dest2, src2, 5);
// 	if (dest2[3] == '\0'){
// 		printf("Found it\n");
// 	}
// 	printf("%s \n", dest2);
//    return(0);
// }

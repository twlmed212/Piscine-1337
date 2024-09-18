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
	while (src[i] && i < (int)n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// int main () {
//     char src[13] = "Hello Brother";
//     char dest[5];
//     ft_strncpy(dest, src, 5);
//     printf("-------Mine------\n");
//     printf("%s", dest);
//     printf("\n-------original------\n");
// 	strncpy(dest, src, 5);
// 	printf("%s", dest);
//    return(0);
// }

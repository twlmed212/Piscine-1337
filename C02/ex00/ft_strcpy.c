/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 08:52:57 by mtawil            #+#    #+#             */
/*   Updated: 2024/08/31 16:34:10 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <strings.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// int main()
// {
//   	char src[20] = "C programming";
// 	char dest[14];
//     char *b;
//     b = ft_strcpy(dest, src);
//     printf("\n-----Mine--\n");
//     printf("%s", dest);
//     printf("\n------original------\n");
// 	strcpy(dest, src);
//     printf("%s \n", dest);
// }
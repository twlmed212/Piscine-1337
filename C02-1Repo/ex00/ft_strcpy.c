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

int	slen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	if (slen(dest) != slen(src))
	{
		return (src);
	}
	while (src[i])
	{
		dest[count] = src[i];
		i++;
		count++;
	}
	dest[i] = '\0';
	return (dest);
}
// int main()
// {
//     char src[] = "Hello World";
//     char dest[13];
//     char *b;
//     b = ft_strcpy(dest, src);
//     printf("\n-----Mine--\n");
//     int i;
//     i = 0;
//     while(b[i]){
//         printf("%c", b[i]);
//         i++;
//     }
//     printf("\n------original------\n");
// 	strcpy(dest, src);
// 	i = 0;
//     while(b[i]){
//         printf("%c", b[i]);
//         i++;
//     }
// }
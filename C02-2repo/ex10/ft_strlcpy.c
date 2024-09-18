/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 09:28:53 by mtawil            #+#    #+#             */
/*   Updated: 2024/09/01 09:31:21 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	stlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	while (i < (int)size -1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (size)
	{
		dest[i] = '\0';
	}
	return (stlen(src));
}

// int main()
// {
// 	char src[] = "Hello there, Venus";
//     char dest[10] ;
//     unsigned int r;
// 	printf("--------Mine-------\n");
//     r = ft_strlcpy(dest,src,5);
//     printf(" %s %d \n", dest, r);

// 	printf("--------Original-------\n");
// 	char src1[] = "Hello there, Venus";
//     char dest1[10];
//     unsigned int r1;
// 	r1 = strlcpy(dest1, src1, 5);
//     printf(" %s %d \n", dest1, r1);

//     return(0);
// }
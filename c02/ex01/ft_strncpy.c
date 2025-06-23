/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 12:34:34 by igomez-c          #+#    #+#             */
/*   Updated: 2025/06/23 12:51:54 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

//int	main(void)
//{
//	char	dest[20];
//	char	src[20] = "Hola que tal bronin";
//	int	n = 4;
//
//	ft_strncpy(dest, src, n);
//	printf("%s", dest);
//	return (0);
//}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		index++;
	}
	if (index < n)
	{
		while (index < n)
		{
			dest[index] = '-';
			index++;
		}
	}
	return (dest);
}

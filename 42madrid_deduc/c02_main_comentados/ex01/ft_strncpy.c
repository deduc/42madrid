/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 12:34:34 by igomez-c          #+#    #+#             */
/*   Updated: 2025/06/25 16:30:49 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	dest[20];
	char	*src = "Hola que tal bronin";
	int	n = 40;

	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
	return (0);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (*src != '\0' && index < n)
	{
		dest[index] = *src++;
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

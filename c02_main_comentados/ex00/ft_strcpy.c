/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 12:31:16 by igomez-c          #+#    #+#             */
/*   Updated: 2025/06/24 17:29:46 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[] = "que pasa brouston";
	char	dest[3];

	// no recojo el return de ft_strcpy porque ya 
	// modifica el propio puntero de este scope
	ft_strcpy(dest, src);
	printf("Resultado: %s\n", dest);
	return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

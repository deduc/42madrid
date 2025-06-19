/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 16:20:28 by igomez-c          #+#    #+#             */
/*   Updated: 2025/06/19 16:45:31 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char dest, char *src);

int	main(void)
{
	char	dest;
	char	*src;

	dest = 'z';
	src = "hola que tal brouston";
	src = ft_strcpy(dest, src);
	printf("%s", src);
	return (0);
}

char	*ft_strcpy(char dest, char *src)
{
	printf("")
	return (value);
}

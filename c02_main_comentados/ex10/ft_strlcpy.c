/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 10:50:06 by igomez-c          #+#    #+#             */
/*   Updated: 2025/06/25 16:34:06 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, const char *src, unsigned int n);

int	main(void)
{
    char src[] = "Hola\tque tal bronin";
    char dest[100];
    unsigned int n = 20;

    ft_strncpy(dest, src, n);

    printf("Cadena copiada: \"%s\"\n", dest);

    printf("Contenido byte a byte:\n");
    for (unsigned int i = 0; i < n; i++)
    {
	if (dest[i] == '\0')
	    printf("\\0 ");
	else
	    printf("%c ", dest[i]);
    }
    printf("\n");

    return 0;
}

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

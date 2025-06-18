/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 14:47:44 by igomez-c          #+#    #+#             */
/*   Updated: 2025/06/18 15:47:02 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str;
	int		size;

	str = "1234567890";
	size = ft_strlen(str);
	printf("%i", size);
	return (0);
}

int	ft_strlen(char *str)
{
	char	letter;
	int		size;

	size = 0;
	letter = *str;
	while (letter != '\0')
	{
		letter = *str;
		size++;
		str++;
	}
	size--;
	return (size);
}

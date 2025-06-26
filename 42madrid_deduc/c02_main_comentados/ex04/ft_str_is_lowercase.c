/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 20:39:34 by igomez-c          #+#    #+#             */
/*   Updated: 2025/06/25 16:31:26 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*str;
	int		result;

	str = "";
	result = ft_str_is_lowercase(str);
	printf("%i", result);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int		result;
	int		index;
	char	c;

	result = 1;
	index = 0;
	c = str[index];
	while (c != '\0' && result == 1)
	{
		if (c < 97 || c > 122)
		{
			result = 0;
		}
		index++;
		c = str[index];
	}
	return (result);
}

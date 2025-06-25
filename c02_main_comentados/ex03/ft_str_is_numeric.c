/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 20:21:16 by igomez-c          #+#    #+#             */
/*   Updated: 2025/06/25 16:31:14 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	*str;
	int		result;

	str = "";
	result = ft_str_is_numeric(str);
	printf("%i", result);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	char	c;
	int		index;
	int		result;

	index = 0;
	c = str[index];
	result = 1;
	while (c != '\0' && result == 1)
	{
		if (c < 48 || c > 57)
		{
			result = 0;
		}
		index++;
		c = str[index];
	}
	return (result);
}

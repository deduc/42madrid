/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                     :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 20:45:44 by igomez-c          #+#    #+#             */
/*   Updated: 2025/06/23 21:07:11 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

// int	main(void)
// {
// 	char	*str;
// 	char	*result;

// 	str = "HOLA QUE tal bronin 1234";
// 	result = "";
// 	result = ft_strlowcase(str);
// 	printf("%s", result);
// 	return (0);
// }

char	*ft_strlowcase(char *str)
{
	int			index;
	char		c;
	static char	result[100];

	index = 0;
	c = str[index];
	while (c != 0)
	{
		if (c >= 65 && c <= 90)
		{
			result[index] = c + 32;
		}
		else
		{
			result[index] = c;
		}
		index++;
		c = str[index];
	}
	return (result);
}

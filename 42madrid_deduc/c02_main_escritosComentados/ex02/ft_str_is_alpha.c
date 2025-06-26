/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 13:50:40 by igomez-c          #+#    #+#             */
/*   Updated: 2025/06/26 12:50:30 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	int	all_alpha;
	char	str[16] = "";

	all_alpha = ft_str_is_alpha(str);
	printf("%i", all_alpha);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	char	c;
	int		index;
	int		result;

	index = 0;
	result = 1;
	c = str[index];
	while (c != '\0' && result == 1)
	{
		if (c < 65 || c > 122)
		{
			result = 0;
		}
		else
		{
			if (c > 90 && c < 97)
			{
				result = 0;
			}
		}
		c = str[index];
		index++;
	}
	return (result);
}

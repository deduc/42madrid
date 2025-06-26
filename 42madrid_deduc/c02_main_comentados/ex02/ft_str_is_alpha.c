/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 13:50:40 by igomez-c          #+#    #+#             */
/*   Updated: 2025/06/25 16:09:29 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

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
	int		result;

	result = 1;
	while (*str != '\0' && result != 0)
	{
		if (!(*str >= 'A' && *str <= 'Z') && !(*str >= 'a' && *str <= 'z'))
		{
			result = 0;
		}
		str++;
	}
	return (result);
}

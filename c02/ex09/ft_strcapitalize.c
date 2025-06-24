/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 21:08:46 by igomez-c          #+#    #+#             */
/*   Updated: 2025/06/23 21:45:59 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);
int		is_alphachar(char c);
int		to_upper(char c);
int		to_lower(char c);

// int	main(void)
// {
// 	char	str[] = "_hola,brouston que,tal,";

// 	ft_strcapitalize(str);
// 	return (0);
// }

char	*ft_strcapitalize(char *str)
{
	int		index;
	char	c;
	char	last_c;

	index = 0;
	c = 'a';
	last_c = 'a';
	while (c != '\0' && last_c != '\0')
	{
		last_c = str[index];
		index++;
		c = str[index];
		if (is_alphachar(last_c) == 0 && is_alphachar(c) == 1)
		{
			str[index] = to_upper(c);
		}
		else
		{
			str[index] = to_lower(c);
		}
	}
	return (str);
}

int	is_alphachar(char c)
{
	int	is_alpha;

	is_alpha = 0;
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		is_alpha = 1;
	}
	return (is_alpha);
}

int	to_upper(char c)
{
	if (c >= 'a' && c <= 'z' && is_alphachar(c))
	{
		c = c - 32;
	}
	return (c);
}

int	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z' && is_alphachar(c))
	{
		c = c + 32;
	}
	return (c);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 20:45:44 by igomez-c          #+#    #+#             */
/*   Updated: 2025/06/23 20:48:55 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int		result;
	int		index;
	char	c;

	result = 1;
	index = 0;
	c = str[index];
	while (c != 0 && result == 1)
	{
		if (c < 65 || c > 90)
		{
			result = 0;
		}
		index++;
		c = str[index];
	}
	return (result);
}

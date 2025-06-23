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

int	is_alphachar(char c);

int	main(void)
{
	char	*str = "_hOL,AA que tal";
	ft_strcapitalize(str);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int			index;
	int			new_word;
	char		c;
	char		last_c;

	index = 0;
	new_word = 0;
	c = str[index + 1];
	while (c != '\0')
	{
		last_c = str[index];
		index++;
		c = str[index];

		printf("c = '%c' --- last = '%c'\n", c, last_c);
	}
	return (str);
}

int	is_alphachar(char c)
{

}

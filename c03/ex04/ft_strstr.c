/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 00:34:29 by igomez-c          #+#    #+#             */
/*   Updated: 2025/07/04 00:35:17 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	get_size(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_substr(char *str, char *to_find, int index, int index2)
{
	while (index2 < get_size(to_find))
	{
		if (str[index] != to_find[index2])
			return (-1);
		index++;
		index2++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	index;
	int	index2;
	int	size;
	int	size2;

	index = 0;
	index2 = 0;
	size = get_size(str);
	size2 = get_size(to_find);
	while (index < size)
	{
		if (str[index] == to_find[index2])
		{
			if (check_substr(str, to_find, index, index2) == 1)
				return (str + index);
		}
		index++;
	}
	return (str);
}

/*
int	main(void)
{
	char str[100] = "holo hola a todos";
	char to_find[100] = "la";
	char *end_str = ft_strstr(str, to_find);

	printf("%s", end_str);
	
	return (0);
}
*/
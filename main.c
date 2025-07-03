/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 18:36:27 by igomez-c          #+#    #+#             */
/*   Updated: 2025/07/03 19:23:10 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (0);
	else
		return (1);
}

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	is_alpha(char c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int		out;
	int		positive;
	int		index;
	int		number;

	positive = 1;
	index = 0;
	number = 0;
	out = 0;
	while (str[index] != '\0')
	{
		if (is_space(str[index]) == 0 && out == 0)
			out = 0;
		else if (str[index] == '-' && out++ <= 1)
		{
			// sacar esto a una funcion que modifique estas 2 vars como punteros
			out = 1;
			positive = positive * -1;
		}
		else if (is_number(str[index]) && out <= 2)
		{
			// sacar esto a otra funcion que modifique estas 2 vars como punteros
			out = 2;
			number = number * 10 + (int) str[index] - '0';
		}
		else if (is_alpha(str[index]) == 1 && out == 2)
			break ;
		index++;
	}
	return (number);
}

void lala(int *a)
{
	*a = 42;
}

int	main(void)
{
	// char	str[34] = "     \t-----------------3132132g21       ";
	// ft_atoi(str);

	int a = 24;
	printf("%i\n", a);
	lala(&a);
	printf("%i\n", a);
	return (0);
}

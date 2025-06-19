/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 14:33:56 by igomez-c          #+#    #+#             */
/*   Updated: 2025/06/19 12:26:45 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

// int	main(void)
// {
// 	char	*str;

// 	str = "Hello World soy ivan";
// 	ft_putstr(str);
// 	return (0);
// }

void	ft_putstr(char *str)
{
	if (*str != '\0')
	{
		write(1, str++, 1);
		ft_putstr(str);
	}
}

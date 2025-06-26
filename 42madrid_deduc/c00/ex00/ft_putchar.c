/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 15:25:26 by igomez-c          #+#    #+#             */
/*   Updated: 2025/06/19 14:01:52 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

// int	main(void)
// {
// 	char	c;

// 	c = 'c';
// 	ft_putchar(c);
// 	return (0);
// }

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:43:00 by igomez-c          #+#    #+#             */
/*   Updated: 2025/06/12 16:46:38 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }

void	ft_print_numbers(void)
{
	int	a;

	a = 0;
	while (0 <= 9)
	{
		write(1, &a, 1);
		a++;
	}
}

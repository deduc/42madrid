/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:48:03 by igomez-c          #+#    #+#             */
/*   Updated: 2025/06/17 15:28:30 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

// int	main(void)
// {
// 	int	n1;
// 	int	n2;
// 	int	n3;
// 	int	*n4;

// 	n1 = 1;
// 	n2 = -1;
// 	n3 = 0;
// 	ft_is_negative(n1);
// 	ft_is_negative(n2);
// 	ft_is_negative(n3);
// 	return (0);
// }

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 16:47:31 by igomez-c          #+#    #+#             */
/*   Updated: 2025/06/12 19:21:00 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

#include <unistd.h>

void	ft_print_comb(void)
{
	int	a, b, c;
	char	ca, cb, cc;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ca = a + '0';
				cb = b + '0';
				cc = c + '0';
				write(1, &ca, 1);
				write(1, &cb, 1);
				write(1, &cc, 1);
				if (a != 7 || b != 8 || c != 9)
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}

int main(void)
{
	ft_print_comb();
	return (0);
}

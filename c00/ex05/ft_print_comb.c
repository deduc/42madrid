/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 12:17:55 by igomez-c          #+#    #+#             */
/*   Updated: 2025/06/17 15:29:19 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_comb(int a, int b, int c);
void	ft_print_comb(void);

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_write_comb(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_write_comb(int a, int b, int c)
{
	char	text[5];
	char	last_char;

	last_char = '$';
	text[0] = a + '0';
	text[1] = b + '0';
	text[2] = c + '0';
	if (a == 7 && b == 8 && c == 9)
	{
		write(1, text, 3);
	}
	else
	{
		text[3] = ',';
		text[4] = ' ';
		write(1, text, 5);
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }

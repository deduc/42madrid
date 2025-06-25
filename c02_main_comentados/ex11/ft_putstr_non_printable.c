/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 12:52:32 by igomez-c          #+#    #+#             */
/*   Updated: 2025/06/25 14:24:31 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);
void	show_non_printable_char(char c);

int	main(void)
{
	char	*str = "hola\tadios tronco";
	ft_putstr_non_printable(str);
	return (0);
}

void	show_non_printable_char(char c)
{
	char	*hex;
	char	output[3];

	hex = "0123456789abcdef";
	if (c >= 32 && c <= 126)
		write(1, &c, 1);
	else
	{
		output[0] = '\\';
		output[1] = hex[(unsigned char)c / 16];
		output[2] = hex[(unsigned char)c % 16];
		write(1, output, 3);
	}

}

void	ft_putstr_non_printable(char *str)
{
	char	letter;
	int		ascii_value;
	
	letter = *str;
	while (letter != '\0')
	{
		letter = *str;
		ascii_value = (int) letter;
		if (ascii_value >= 32 && ascii_value <= 127)
		{
			write(1, &letter, 1);
		}
		else
		{
			show_non_printable_char(letter);
		}
		str++;
	}
}

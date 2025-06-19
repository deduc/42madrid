/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 15:48:41 by igomez-c          #+#    #+#             */
/*   Updated: 2025/06/19 12:30:19 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

// int	main(void)
// {
// 	int	arr[5];
// 	int	arr_size;

// 	arr[0] = 5;
// 	arr[1] = 4;
// 	arr[2] = 3;
// 	arr[3] = 2;
// 	arr[4] = 1;
// 	arr_size = 5;
// 	ft_rev_int_tab(arr, arr_size);
// 	return (0);
// }

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	index_aux;
	int	array_aux[5];

	index = 0;
	index_aux = size - 1;
	while (index < size)
	{
		array_aux[index] = tab[index_aux];
		index_aux--;
		index++;
	}
}
	// printf("%i", tab[0]);
	// printf("%i", tab[1]);
	// printf("%i", tab[2]);
	// printf("%i", tab[3]);
	// printf("%i", tab[4]);
	// printf("\n");
	// printf("%i", array_aux[0]);
	// printf("%i", array_aux[1]);
	// printf("%i", array_aux[2]);
	// printf("%i", array_aux[3]);
	// printf("%i", array_aux[4]);

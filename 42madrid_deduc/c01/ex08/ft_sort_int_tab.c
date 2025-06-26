/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 16:25:32 by igomez-c          #+#    #+#             */
/*   Updated: 2025/06/19 13:48:39 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

// int	main(void)
// {
// 	int	arr[5];
// 	int	size;
// 	int	i;

// 	arr[0] = 9;
// 	arr[1] = 5;
// 	arr[2] = 3;
// 	arr[3] = 4;
// 	arr[4] = 2;
// 	size = 5;
// 	ft_rev_int_tab(arr, size);
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%i", arr[i]);
// 		i++;
// 	}
// 	return (0);
// }

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 16:25:32 by igomez-c          #+#    #+#             */
/*   Updated: 2025/06/18 17:10:26 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_int_tab(int *array, int size);

int main()
{
    int array[5];
    int size;
    int	i;

    array[0] = 1;
    array[1] = 6;
    array[2] = 8;
    array[3] = 9;
    array[4] = 7;
    size = 5;

	ft_sort_int_tab(array, size);
	// mostrar elementos array
    i = 0;
	while (i < size)
	{
		printf("%d\n", array[i]);
		i++;
	}

    return (0);
}

/**
 * Ordenar de menor a mayor el array.
 * Siempre se asume que el menor es el nº por el que iteramos en el bucle principal.
 */
void ft_sort_int_tab(int *array, int size)
{
    int index;
	int index_aux;
	int min_index;
	int temp;
    
    index = 0;
    // iterar hasta el penultimo porque voy a comprobar x y x+1
    // por eso hago index < size -1
	while (index < size - 1)
	{
		min_index = index;
        // siempre voy a comprobar x y x+1
		index_aux = index + 1;
        // desde x+1 hasta el final-1
		while (index_aux < size)
		{
            // si el numero evaluado es mayor al numero iterado en este scope, cambio el indice del nuevo numero minimo
			if (array[min_index] > array[index_aux])
            {
                min_index = index_aux;
            }
			index_aux++;
		}
        // si se ha encontrado algun numero menor al inicial, se intercambian
		if (min_index != index)
		{
			temp = array[index];
			array[index] = array[min_index];
			array[min_index] = temp;
		}
		index++;
	}
}
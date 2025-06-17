/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:41:29 by igomez-c          #+#    #+#             */
/*   Updated: 2025/06/17 18:59:39 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);
int	*****declare_small_pointer();
int	*********declare_super_pointer();
int	main(void)
{
	int	*********p9;

	p9 = declare_super_pointer();
	ft_ultimate_ft(p9);
	return (0);
}

int*****	declare_small_pointer()
{

	int	i;
	int	*p1;
	int	**p2;
	int	***p3;
	int	****p4;
	int	*****p5;

	p1 = &i;
	p2 = &p1;
	p3 = &p2;
	p4 = &p3;
	p5 = &p4;
	
	return p5;
}

int *********declare_super_pointer(*****int p5)
{
	int	*****p5;
	int	******p6;
	int	*******p7;
	int	********p8;
	int	*********p9;

	p5 = declare_small_pointer();
	p6 = &p5;
	p7 = &p6;
	p8 = &p7;
	p9 = &p8;
}

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

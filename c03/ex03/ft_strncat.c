/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 21:57:28 by igomez-c          #+#    #+#             */
/*   Updated: 2025/07/04 00:34:14 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index_dest;
	unsigned int	index_src;

	index_dest = 0;
	index_src = 0;
	while (dest[index_dest] != '\0')
		index_dest++;
	while (src[index_src] != '\0' && index_src < nb)
	{
		dest[index_dest] = src[index_src];
		index_dest++;
		index_src++;
	}
	dest[index_dest] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	dest[100] = "abc";
// 	char	src[100] = "1234567890";
// 	ft_strncat(dest, src, 40);
// 	return (0);
// }

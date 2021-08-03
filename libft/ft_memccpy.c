/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isa-viei <isa-viei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 15:14:29 by isa-viei          #+#    #+#             */
/*   Updated: 2021/06/12 13:03:19 by isa-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*destu;
	unsigned char	*srcu;

	destu = (unsigned char *)dest;
	srcu = (unsigned char *)src;
	while (n-- > 0)
	{
		*destu = *srcu;
		if (*srcu == (unsigned char)c)
			return ((void *)destu + 1);
		destu++;
		srcu++;
	}
	return (NULL);
}

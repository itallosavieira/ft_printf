/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isa-viei <isa-viei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:57:15 by isa-viei          #+#    #+#             */
/*   Updated: 2021/06/09 14:27:28 by isa-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*su1;
	unsigned char	*su2;

	su1 = (unsigned char *)s1;
	su2 = (unsigned char *)s2;
	while (n--)
	{
		if (*su1 != *su2)
			return ((int)(*su1 - *su2));
		su1++;
		su2++;
	}
	return (0);
}

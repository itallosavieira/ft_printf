/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isa-viei <isa-viei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 20:51:15 by isa-viei          #+#    #+#             */
/*   Updated: 2021/06/07 15:05:44 by isa-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*destc;
	char	*srcc;

	destc = (char *)dest;
	srcc = (char *)src;
	if (srcc < destc)
	{
		while (n--)
		{
			destc[n] = srcc[n];
		}
		return (dest);
	}
	ft_memcpy(destc, srcc, n);
	return (dest);
}

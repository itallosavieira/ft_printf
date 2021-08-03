/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isa-viei <isa-viei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:26:41 by isa-viei          #+#    #+#             */
/*   Updated: 2021/06/07 15:53:58 by isa-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ischar;

	ptr = (unsigned char *)s;
	ischar = NULL;
	while (n--)
	{
		if ((unsigned char)c == *ptr++)
		{
			ischar = ptr - 1;
			break ;
		}
	}
	return (ischar);
}

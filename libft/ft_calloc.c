/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isa-viei <isa-viei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 13:37:40 by isa-viei          #+#    #+#             */
/*   Updated: 2021/06/09 13:55:57 by isa-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t	total;
	char	*buffer;

	total = n * size;
	buffer = malloc(total);
	if (!buffer || total > INT_MAX)
		return (NULL);
	ft_bzero(buffer, total);
	return ((void *)buffer);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isa-viei <isa-viei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 03:16:55 by isa-viei          #+#    #+#             */
/*   Updated: 2021/06/10 01:30:31 by isa-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	s2_size;
	size_t	i;

	s2_size = ft_strlen(s2);
	i = 0;
	if (!(*s2))
		return ((char *)s1);
	while (*s1 && (i < len))
	{
		if (!(ft_strncmp(s1, s2, s2_size))
			&& (i + s2_size <= len))
			return ((char *)s1);
		s1++;
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isa-viei <isa-viei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 13:59:30 by isa-viei          #+#    #+#             */
/*   Updated: 2021/06/09 14:13:53 by isa-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*s_cpy;

	size = ft_strlen(s) + 1;
	s_cpy = (char *)malloc(size);
	if (!(s_cpy))
		return (NULL);
	ft_strlcpy(s_cpy, s, size);
	return (s_cpy);
}

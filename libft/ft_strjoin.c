/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isa-viei <isa-viei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 17:28:20 by isa-viei          #+#    #+#             */
/*   Updated: 2021/06/10 00:20:20 by isa-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_size;
	char	*sj;

	if (!(s1) || !(s2))
		return (NULL);
	total_size = ft_strlen(s1) + ft_strlen(s2);
	sj = (char *)malloc((total_size + 1) * sizeof(char));
	if (!(sj))
		return (NULL);
	while (*s1)
		*sj++ = *s1++;
	while (*s2)
		*sj++ = *s2++;
	*sj = '\0';
	return (sj - total_size);
}

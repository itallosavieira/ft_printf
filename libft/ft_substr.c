/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isa-viei <isa-viei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 16:45:56 by isa-viei          #+#    #+#             */
/*   Updated: 2021/06/09 17:24:03 by isa-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_size;
	size_t	max_size;
	char	*subs;

	if (!(s))
		return (NULL);
	s_size = ft_strlen(s);
	if (start < s_size)
		max_size = s_size - start;
	if (start >= s_size)
		max_size = 0;
	if (max_size > len)
		max_size = len;
	subs = (char *)malloc((max_size + 1) * sizeof(char));
	if (!(subs))
		return (NULL);
	ft_strlcpy(subs, s + start, max_size + 1);
	return (subs);
}

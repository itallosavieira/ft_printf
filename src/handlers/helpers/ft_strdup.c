/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isa-viei <isa-viei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:47:20 by isa-viei          #+#    #+#             */
/*   Updated: 2021/11/09 20:47:21 by isa-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (s1[len] != '\0')
		len++;
	ptr = malloc(len + 1);
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

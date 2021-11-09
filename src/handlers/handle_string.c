/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isa-viei <isa-viei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:46:15 by isa-viei          #+#    #+#             */
/*   Updated: 2021/11/09 20:46:16 by isa-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	handle_string(char *str)
{
	int	counter;

	counter = 0;
	if (!str)
		str = EXCEPTION_STR;
	while (str[counter] != '\0')
		counter += ft_putchar(str[counter]);
	return (counter);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_decimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isa-viei <isa-viei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:44:57 by isa-viei          #+#    #+#             */
/*   Updated: 2021/11/09 20:45:05 by isa-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

static int	handle_negative_integer(signed long *value)
{
	int		counter;

	counter = 0;
	if (*value < 0)
	{
		ft_putchar('-');
		*value *= -1;
		counter++;
	}
	return (counter);
}

int	handle_decimal(signed long value)
{
	int		counter;
	char	*str;

	counter = handle_negative_integer(&value);
	str = itoa_base(value, DECIMAL_BASE);
	counter += handle_string(str);
	free(str);
	return (counter);
}

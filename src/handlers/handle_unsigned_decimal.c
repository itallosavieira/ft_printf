/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_unsigned_decimal.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isa-viei <isa-viei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:46:20 by isa-viei          #+#    #+#             */
/*   Updated: 2021/11/09 20:46:22 by isa-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	handle_unsigned_decimal(unsigned int value)
{
	int		counter;
	char	*str;

	str = itoa_base(value, DECIMAL_BASE);
	counter = handle_string(str);
	free(str);
	return (counter);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_hexadecimal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isa-viei <isa-viei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:45:31 by isa-viei          #+#    #+#             */
/*   Updated: 2021/11/09 20:45:32 by isa-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	handle_hexadecimal(unsigned int value)
{
	int		counter;
	char	*str;

	str = itoa_base(value, HEX_BASE);
	counter = handle_string(str);
	free(str);
	return (counter);
}

int	handle_hexadecimal_upper(unsigned int value)
{
	int		counter;
	char	*str;

	str = itoa_base(value, HEX_BASE_UPPER);
	counter = handle_string(str);
	free(str);
	return (counter);
}

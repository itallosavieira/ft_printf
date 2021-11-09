/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isa-viei <isa-viei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:46:11 by isa-viei          #+#    #+#             */
/*   Updated: 2021/11/09 20:46:12 by isa-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

static int	print_preceding_string(char *str)
{
	int	counter;

	counter = handle_string(str);
	return (counter);
}

int	handle_pointer(void *ptr_addr)
{
	int				counter;
	char			*str;
	unsigned long	addr;

	addr = (unsigned long)ptr_addr;
	counter = print_preceding_string(PRECEDING_STR);
	str = itoa_base(addr, HEX_BASE);
	counter += handle_string(str);
	free(str);
	return (counter);
}

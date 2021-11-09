/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isa-viei <isa-viei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:44:22 by isa-viei          #+#    #+#             */
/*   Updated: 2021/11/09 20:44:33 by isa-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	handle_char(char c)
{
	int		counter;

	counter = 0;
	ft_putchar(c);
	return (counter + 1);
}

#include "../includes/ft_printf.h"

t_printf			*ft_start_sprintf(t_printf *value)
{
	value->index = 0;
	value->total = 0;
	return (value);
};

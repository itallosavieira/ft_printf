#include "../includes/ft_printf.h"

t_printf			*ft_start_sprintf(t_printf *value)
{
	value->index = 0;
	value->total = 0;
	return (value);
};

t_flags	*ft_start_sflags(t_flags *value)
{
	value->character = 'c';
	value->string = 's';
	value->pointer = '*';
	value->decimal = 'd';
	value->integer = 'i';
	value->unsigned_decimal = 'u';
	value->hexadecimal = 'x';
	value->percent = '%';
	return (value);
};


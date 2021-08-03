#include "../includes/ft_printf.h"

t_printf		*ft_start_sprintf(t_printf *value)
{
	value->index = 0;
	value->total = 0;
}

t_conversions	*ft_start_sconversions(t_conversions *value)
{
	value->character = 'c';
	value->string = 's';
	value->pointer = '*';
	value->decimal = 'd';
	value->integer = 'i';
	value->unsigned_decimal = 'u';
	value->hexadecimal = 'x';
	value->percent = '%';
}

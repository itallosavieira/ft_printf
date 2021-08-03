#include "../includes/ft_printf.h"

int		ft_isspace(char ch)
{
	if (ch == ' ')
		return (1);
	return (0);
}

int		ft_ispercent(char ch)
{
	if (ch == '%')
		return (1);
	return (0);
}

int		ft_printf(const char *format, ...)
{
	t_printf 	pf;
	t_flags 	flag;
	t_items		item;

	ft_start_sprintf(&pf);
	ft_start_sflags(&flag);

	va_start(pf.argument_list, format);
	while (format[pf.index] && format)
	{
		if (format[pf.index] == flag.percent)
		{
			pf.index++;
			if (format[pf.index] == flag.percent)
			{
				pf.index++;
				ft_putchar_fd('%', 1);
				continue;
			}
			if (format[pf.index] == flag.character)
			{
				pf.index++;
				item.character = va_arg(pf.argument_list, int);
				ft_putchar_fd(item.character, 1);
			}
			if (format[pf.index] == flag.string)
			{
				pf.index++;
				item.string = va_arg(pf.argument_list, char *);
				ft_putstr_fd(item.string, 1);
			}


		}
		ft_putchar_fd(format[pf.index], 1);
		pf.index++;
	}
	va_end(pf.argument_list);
	return (1);
}

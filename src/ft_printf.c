#include "../includes/ft_printf.h"

static int	ft_check_conversion(const char *format, t_printf pf)
{

}

static int	ft_print_conversion(const char *format, t_printf pf)
{

}

static int	ft_printf_aux(const char *format, t_printf pf)
{
	while (format[pf.index] && format)
	{
		if (format[pf.index] == '%')
		{
			pf.index++;
			ft_print_conversion(format, pf);
			if (format[pf.index] == '%')
			{
				pf.index++;
				ft_putchar_fd('%', 1);
				continue;
			}
			if (format[pf.index] == 'c')
			{
				pf.index++;
				ft_putchar_fd(va_arg(pf.argument_list, int), 1);
			}
			if (format[pf.index] == 's')
			{
				pf.index++;
				ft_putstr_fd(va_arg(pf.argument_list, char *), 1);
			}
		}
		ft_putchar_fd(format[pf.index], 1);
		pf.index++;
	}
	return (pf.index);
}

int			ft_printf(const char *format, ...)
{
	t_printf 	pf;

	ft_start_sprintf(&pf);
	va_start(pf.argument_list, format);
	pf.total = ft_printf_aux(format, pf);
	va_end(pf.argument_list);
	return (pf.total);
}

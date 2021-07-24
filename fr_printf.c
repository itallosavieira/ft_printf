#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

void ft_putstr(char const *str)
{
	while (*str)
		write(1, str++, 1);
}

int ft_printf(char const *str, ...)
{
	va_list args_list;
	char *arg_string;
	int i;

	i = 4;
	va_start(args_list, str);
	ft_putstr(str);

	while (i)
	{
		arg_string = va_arg(args_list, char *);
		ft_putstr(arg_string);
		i--;
	}
	va_end(args_list);
	return (0);
}

int main()
{
	ft_printf(" ", " ", "eh", "Meu", "leticinha\n");
	return (0);
}

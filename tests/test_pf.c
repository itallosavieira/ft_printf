#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

void ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void ft_putnbr(int num)
{
	if (num < 0)
	{
		ft_putchar('-');
		if (num == INT_MAX)
		{
			ft_putchar('2');
			ft_putnbr(147483648);
			return;
		}
		num = -num;
	}
	if (num > 9)
	{
		ft_putnbr(num / 10);
	}
	ft_putchar(num % 10 + 48);
}

int ft_printf(char *str, ...)
{
	va_list list_of_args;
	char *item_ch;
	int item_int;
	va_start(list_of_args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			while (*str == ' ')
			{
				str++;
			}
			if (*str == 's')
			{
				str++;
				item_ch = va_arg(list_of_args, char *);
				ft_putstr(item_ch);
			}
			if (*str == 'd' || *str == 'i')
			{
				str++;
				item_int = va_arg(list_of_args, int);
				ft_putnbr(item_int);
			}
		}
		ft_putchar(*str);
		str++;
	}
	va_end(list_of_args);
	return (1);
}

int main()
{
	int		age;
	char	*name1[20];
	char	*name2[20];
	char	*name3[20];

	age = 25;
	*name1 = "Itallo";
	*name2 = "Sa";
	*name3 = "Vieira";

	ft_printf("ft_printf:\n");
	ft_printf("Name:\t%s %s %s \nAge:\t%d\n\n", *name1, *name2, *name3, age);


	printf("printf:\n");
	printf("Name:\t%s %s %s \nAge:\t%d\n\n", *name1, *name2, *name3, age);

	return (0);
}

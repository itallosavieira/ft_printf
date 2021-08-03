#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/libft.h"
# include <stdarg.h>
# include <stdio.h>

typedef struct	s_printf
{
	size_t	index;
	size_t	total;
	va_list	argument_list;
}			t_printf;

typedef struct	s_flags
{
	int		character;
	int		string;
	int		pointer;
	int		decimal;
	int		integer;
	int		unsigned_decimal;
	int		hexadecimal;
	int		percent;
}			t_flags;

typedef struct	s_items
{
	int		character;
	char	*string;
	char	*pointer;
	int		decimal;
	int		integer;
	size_t	unsigned_decimal;
	int		hexadecimal;
	int		percent;
}			t_items;

int			ft_printf(const char *format, ...);
t_printf	*ft_start_sprintf(t_printf *value);
t_flags		*ft_start_sflags(t_flags *value);
void		ft_check_flag(const char *format, t_printf *sprintf);

#endif

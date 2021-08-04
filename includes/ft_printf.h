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

int			ft_printf(const char *format, ...);
t_printf	*ft_start_sprintf(t_printf *value);
void		ft_check_flag(const char *format, t_printf *sprintf);

#endif

#include "../includes/ft_printf.h"

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
	ft_printf("c:\t %c%%%%\ns:\t %p\n", 'a', &name1);

	printf("\n\nprintf:\n");
	printf("c:\t %c%%%%\ns:\t %p\n", 'a', &name1);

	return (0);
}

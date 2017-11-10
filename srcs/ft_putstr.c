#include "libft.h"

void	ft_putstr(char *str)
{
	while (str != NULL && *str)
	  ft_putchar(*str++);
}

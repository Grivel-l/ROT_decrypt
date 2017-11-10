#include "libft.h"

void	ft_putstr_fd(char *str, unsigned short int fd)
{
	while (str != NULL && *str)
	  ft_putchar_fd(*str++, fd);
}

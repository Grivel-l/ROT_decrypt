#include "libft.h"

void	ft_putchar_fd(char c, unsigned short int fd)
{
	write(1, &c, fd);
}

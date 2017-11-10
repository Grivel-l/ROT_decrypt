#include "libft.h"

void	ft_putnbr(int nb)
{
  if (nb == -2147483648)
  {
    ft_putchar('-');
    ft_putchar(2 + '0');
    ft_putnbr(147483648);
    return ;
  }
  if (nb >= 0 && nb <= 9)
    ft_putchar(nb + '0');
  else if (nb >= 10)
  {
    ft_putnbr(nb / 10);
    ft_putnbr(nb % 10);
  }
  else
  {
    ft_putchar('-');
    ft_putnbr(nb * -1);
  }

}

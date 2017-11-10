#include "libft.h"

void	rot_decrypt(char *str)
{
  char		*str_p;
  unsigned char	index;

  index = 1;
  while (index < 26)
  {
    ft_putstr("ROT ");
    ft_putnbr(index);
    ft_putstr(":\n");
    str_p = str;
    while (*str_p)
    {
      if ((*str_p >= 65) && (*str_p <= 90))
	ft_putchar(*str_p + index > 90 ? *str_p + index - 26 : *str_p + index);
      else if ((*str_p >= 97) && (*str_p <= 122))
	ft_putchar(*str_p + index > 122 ? *str_p + index - 26 : *str_p + index);
      str_p += 1;
    }
    ft_putstr(index + 1 < 26 ? "\n\n" : "\n");
    index += 1;
  }
}

int	main(int argc, char **argv)
{
  if (argc != 2)
  {
    ft_putstr_fd("Invalid number of arguments\n", 2);
    return (1);
  }
  rot_decrypt(argv[1]);
  return (0);
}

#include <unistd.h>

void  ft_putchar(char c)
{
  write (1,&c,1);
}

void ft_putnbr(int nb)
{
  if (nb == -2147483648)
  {
    write (1,"-",1);
    write (1,"214783648",9);
    return ;
  }
  if (nb < 0)
  {
        write (1,"-",1);
        nb = -nb;
  }
  if (nb > 9)
  {
    ft_putnbr(nb / 10);
  }
  ft_putchar((nb % 10) + '0');
}

int main()
{
  ft_putnbr(-345);
  ft_putchar('\n');
  return 0;
}

#include <unistd.h>

void ft_putchar(char c)
{
  write (1,&c,1);
}

void ft_print_numbers(void)
{
  char i;
  i = '0';

  while (i <= '9')
  {
    ft_putchar(i);
    i++;
  }
  ft_putchar('\n');
}

int main()
{
  ft_print_numbers();
  return 0;
}

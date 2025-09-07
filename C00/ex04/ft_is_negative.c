#include <unistd.h>

void ft_putchar(char c)
{
  write (1,&c,1);
}

void ft_is_negative(int n)
{
  if (n < 0)
    ft_putchar('N');
  else 
    ft_putchar('P');
  ft_putchar('\n');
}

int main()
{
  ft_is_negative(5);
  return 0;
}

//dont include the main

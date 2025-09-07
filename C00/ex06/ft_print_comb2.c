#include <unistd.h>

void ft_putchar(char c)
{
  write (1,&c,1);
}

void ft_print_number(int n)
{

  ft_putchar((n / 10) + '0');
  ft_putchar((n % 10) + '0');
}

void ft_print_comb2(void)
{
  int a = 0;
  int b;
  while (a <= 99)
  {
    b = a + 1;
    while (b <= 99)
    {
      ft_print_number(a);
      ft_putchar(' ');
      ft_print_number(b);
      if (a != 98 || b != 99)
      {
        ft_putchar(',');
        ft_putchar(' ');
      }
      b++;
    }
    a++;
  }
}

int main()
{
  ft_print_comb2();
  ft_putchar('\n');
  return 0;
}

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void print_comb(int comb[], int n)
{
    int i = 0;
    while (i < n)
    {
        ft_putchar(comb[i] + '0');
        i++;
    }
}

void ft_recursive(int comb[], int n, int index, int start)
{
    int i;

    if (index == n)
    {
        print_comb(comb, n);
        if (comb[0] != 10 - n) 
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
        return;
    }

    i = start;
    while (i <= 9)
    {
        comb[index] = i;         
        ft_recursive(comb, n, index + 1, i + 1); 
        i++;
    }
}

void ft_print_combn(int n)
{
    int comb[9];

    if (n <= 0 || n >= 10)
        return;

    ft_recursive(comb, n, 0, 0);
}

int main()
{
  ft_print_combn(6);
  return 0;

}

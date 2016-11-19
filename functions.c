/*
** functions.c for functions in /home/lnanaay/projets/PSU_2016_my_printf
** 
** Made by Nathan Lebon
** Login   <lnanaay@epitech.net>
** 
** Started on  Wed Nov  9 12:29:27 2016 Nathan Lebon
** Last update Sat Nov 19 15:41:12 2016 Nathan Lebon
*/

#include <unistd.h>
#include <stdarg.h>
#include "my.h"

void    my_putchar(char c)
{
  write(1, &c, 1);
}

void    my_putchar_list(va_list c)
{
  my_putchar(va_arg(c, int));
}

void	print_int(int i)
{
  char	nb[25];
  int	j;

  j = 0;
  if (i == 0)
    {
      my_putchar('0');
      return ;
    }
  if (i < 0)
    {
      my_putchar('-');
      i = - i;
    }
  while (i != 0)
    {
      nb[j] = (i % 10 + 48);
      i = i / 10;
      j = j + 1;
    }
  j = j - 1;
  while (j >= 0)
    {
      my_putchar(nb[j]);
      j = j - 1;
    }
}

void	print_int_list(va_list val)
{
  print_int(va_arg(val, int));
}

/*
** my_putstr.c for putstr in /home/lnanaay/projets/PSU_2016_my_printf
** 
** Made by Nathan Lebon
** Login   <lnanaay@epitech.net>
** 
** Started on  Wed Nov  9 13:42:50 2016 Nathan Lebon
** Last update Mon Nov 14 10:45:22 2016 Nathan Lebon
*/

#include <stdarg.h>
#include <string.h>
#include "my.h"

void	print_null()
{
  my_putchar('(');
  my_putchar('n');
  my_putchar('u');
  my_putchar('l');
  my_putchar('l');
  my_putchar(')');
}

void	my_putstr(char *s)
{
  int	i;

  i = 0;
  if (s == NULL)
    {
      print_null();
      return;
    }
  while (s[i])
    {
      my_putchar(s[i]);
      i = i + 1;
    }
}

void	print_per()
{
  my_putchar('%');
}

void	my_putstr_list(va_list val)
{
  my_putstr(va_arg(val, char *));
}

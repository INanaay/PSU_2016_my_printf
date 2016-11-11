/*
** my_putstr.c for putstr in /home/lnanaay/projets/PSU_2016_my_printf
** 
** Made by Nathan Lebon
** Login   <lnanaay@epitech.net>
** 
** Started on  Wed Nov  9 13:42:50 2016 Nathan Lebon
** Last update Wed Nov  9 16:13:59 2016 Nathan Lebon
*/

#include <stdarg.h>
#include "my.h"

void	my_putstr(char *s)
{
  int	i;

  i = 0;
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

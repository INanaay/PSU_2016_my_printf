/*
** nonp.c for nonp in /home/lnanaay/projets/PSU_2016_my_printf
** 
** Made by Nathan Lebon
** Login   <lnanaay@epitech.net>
** 
** Started on  Sat Nov 12 11:31:58 2016 Nathan Lebon
** Last update Mon Nov 14 11:21:08 2016 Nathan Lebon
*/

#include <stdarg.h>
#include "my.h"

void	char_value(char *s)
{
  int	i;

  i = 0;
  while (s[i])
    {
      if (s[i] < 32 || s[i] >= 127)
	{
	  my_putchar('\\');
	  my_putnbr_base_octal((int)s[i]);
	}
      else
	my_putchar(s[i]);
      i = i + 1;
    }
}

void	get_char(va_list val)
{
  char_value(va_arg(val, char *));
}

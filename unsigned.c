/*
** unsigned.c for unsigne in /home/lnanaay/projets/PSU_2016_my_printf
** 
** Made by Nathan Lebon
** Login   <lnanaay@epitech.net>
** 
** Started on  Wed Nov  9 18:52:38 2016 Nathan Lebon
** Last update Sat Nov 19 15:52:06 2016 Nathan Lebon
*/

#include <stdarg.h>
#include "my.h"

void     print_uint(unsigned int i)
{
  char  nb[25];
  int   j;

  j = 0;
  if (i == 0)
    {
      my_putchar('0');
      return ;
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

void	print_ui_list(va_list val)
{
  print_uint(va_arg(val, unsigned int));
}

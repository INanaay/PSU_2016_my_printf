/*
** str_oct.c for stroct in /home/lnanaay/projets/PSU_2016_my_printf
** 
** Made by Nathan Lebon
** Login   <lnanaay@epitech.net>
** 
** Started on  Fri Nov 11 17:42:30 2016 Nathan Lebon
** Last update Sat Nov 12 12:05:10 2016 Nathan Lebon
*/

#include <stdarg.h>
#include "my.h"

void    convert_count(int nbr, int b, char *base, int count)
{
  int   r;
  int   q;

  r = nbr % b;
  q = nbr / b;
  count = 0;
  if (q == 0)
    {
      my_putchar(base[r]);
      return;
    }
  convert_count(q, b, base, count + 1);
  if (r < b)
    my_putchar(base[r]);
  return;
}

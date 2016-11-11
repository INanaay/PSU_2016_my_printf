/*
** pointer.c for pointer in /home/lnanaay/projets/PSU_2016_my_printf
** 
** Made by Nathan Lebon
** Login   <lnanaay@epitech.net>
** 
** Started on  Fri Nov 11 16:16:13 2016 Nathan Lebon
** Last update Fri Nov 11 17:26:48 2016 Nathan Lebon
*/

#include <stdarg.h>
#include "my.h"

void     convert_long(unsigned long nbr, unsigned long b, char *base)
{
  unsigned long   r;
  unsigned long   q;

  r = nbr % b;
  q = nbr / b;
  if (q == 0)
    {
      my_putchar(base[r]);
      return;
    }
  convert_long(q, b, base);
  if (r < b)
    my_putchar(base[r]);
}

void		get_adress(void *c)
{
  unsigned long	i;
  unsigned long b;

  i = (unsigned long)&c;
  b = 16;
  my_putchar('0');
  my_putchar('x');
  convert_long(i, b, "0123456789abcdef"); 
}

void	adress(va_list valist)
{
  get_adress(va_arg(valist, void *));
}

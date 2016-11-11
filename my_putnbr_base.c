/*
** my_putnbr_base.c for putnbrbase in /home/lnanaay/CPool_Day06
** 
** Made by LEBON Nathan
** Login   <lnanaay@epitech.net>
** 
** Started on  Tue Oct 11 11:21:53 2016 LEBON Nathan
** Last update Fri Nov 11 17:46:33 2016 Nathan Lebon
*/

#include <stdarg.h>
#include "my.h"

int	ll(char *c)
{
  int	i;

  i = 0;
  while (c[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}

void	convert(int nbr, int b, char *base)
{
  int	r;
  int	q;

  r = nbr % b;
  q = nbr / b;
  if (q == 0)
    {
      my_putchar(base[r]);
      return;
    }
  convert(q, b, base);
  if (r < b)
    my_putchar(base[r]); 
}

void	my_putnbr_base(int nbr)
{
  int	b;

  b = 2;
  if (nbr < 0)
    my_putchar('-');
  convert(nbr, b, "01" );
}

void	my_putnbr_base_list(va_list val)
{
  my_putnbr_base(va_arg(val, int));
}

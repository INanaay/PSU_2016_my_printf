/*
** hex.c for printhex in /home/lnanaay/projets/PSU_2016_my_printf
** 
** Made by Nathan Lebon
** Login   <lnanaay@epitech.net>
** 
** Started on  Wed Nov  9 18:35:41 2016 Nathan Lebon
** Last update Thu Nov 10 17:20:37 2016 Nathan Lebon
*/

#include <stdarg.h>
#include "my.h"

int     convert_hex(unsigned int nbr, int b, char *base)
{
  int   r;
  int   q;

  r = nbr % b;
  q = nbr / b;
  if (q == 0)
    {
      my_putchar(base[r]);
      return (0);
    }
  convert(q, b, base);
  if (r < b)
    my_putchar(base[r]);
}

void    my_putnbr_base_hexl(int nbr)
{
  int   b;

  b = 16;
  nbr = (unsigned int)nbr;
  convert_hex(nbr, b, "0123456789abcdef" );
}

void    my_putnbr_base_list_hexl(va_list val)
{
  my_putnbr_base_hexl(va_arg(val, int));
}

void    my_putnbr_base_hexc(int nbr)
{
  int   b;

  b = 16;
  nbr = (unsigned int)nbr;
  convert_hex(nbr, b, "0123456789ABCDEF" );
}

void    my_putnbr_base_list_hexc(va_list val)
{
  my_putnbr_base_hexc(va_arg(val, int));
}

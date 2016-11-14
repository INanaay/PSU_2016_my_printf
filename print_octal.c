/*
** print_octal.c for printotcal in /home/lnanaay/projets/PSU_2016_my_printf
** 
** Made by Nathan Lebon
** Login   <lnanaay@epitech.net>
** 
** Started on  Wed Nov  9 18:09:40 2016 Nathan Lebon
** Last update Mon Nov 14 11:16:35 2016 Nathan Lebon
*/

#include <stdarg.h>
#include "my.h"

void    my_putnbr_base_octal(int nbr)
{
  int   b;

  b = 8;
  convert(nbr, b, "01234567");
}

void    my_putnbr_base_list_octal(va_list val)
{
  my_putnbr_base_octal(va_arg(val, int));
}

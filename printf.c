/*
** printf.c for printf in /home/lnanaay/projets/PSU_2021_my_printf
** 
** Made by Nathan Lebon
** Login   <lnanaay@epitech.net>
** 
** Started on  Tue Nov  8 10:42:01 2016 Nathan Lebon
** Last update Mon Nov 14 16:08:49 2016 Nathan Lebon
*/

#include <stdarg.h>
#include "my.h"

int		cases(char *s, va_list valist, int i, t_flag *t)
{
  int		j;

  j = 0;
  while (s[i])
    {
      if (s[i] == '%')
	{
	  i = i + 1;
	  while (1)
	    {
	      if (s[i] == t[j].c)
		{
		  t[j].fptr(valist);
		  break;
		}
	      j = j + 1;
	    }
	  j = 0;
	}
      else
	my_putchar(s[i]);
      i = i + 1;
    }
  va_end(valist);
}

void    fill_tab(char c, void *f, t_flag *tab)
{
  tab->c = c;
  tab->fptr = f;
}

void    flags(t_flag *t)
{
  fill_tab('c', &my_putchar_list, &t[0]);
  fill_tab('i', &print_int_list, &t[1]);
  fill_tab('d', &print_int_list, &t[2]);
  fill_tab('s', &my_putstr_list, &t[3]);
  fill_tab('b', &my_putnbr_base_list, &t[4]);
  fill_tab('%', &print_per, &t[5]);
  fill_tab('o', &my_putnbr_base_list_octal, &t[6]);
  fill_tab('x', &my_putnbr_base_list_hexl, &t[7]);
  fill_tab('X', &my_putnbr_base_list_hexc, &t[8]);
  fill_tab('u', &print_ui_list, &t[9]);
  fill_tab('p', &adress, &t[10]);
  fill_tab('S', &get_char, &t[11]);
}

int		my_printf(char *s, ...)
{
  va_list	valist;
  t_flag	tab[25];

  flags(tab);
  va_start(valist, s);
  cases(s, valist, 0, tab);
  return (0);
}

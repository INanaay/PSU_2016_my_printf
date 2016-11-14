/*
** my.h for my in /home/lnanaay/projets/PSU_2021_my_printf
** 
** Made by Nathan Lebon
** Login   <lnanaay@epitech.net>
** 
** Started on  Tue Nov  8 18:35:30 2016 Nathan Lebon
** Last update Sun Nov 13 17:54:25 2016 Nathan Lebon
*/

#include <stdarg.h>
#ifndef MY_H_
#define MY_H_

typedef struct s_flag t_flag;
struct	s_flag
{
  char	c;
  void	(*fptr)(va_list);
};

void	my_putchar_list(va_list);
void	my_putchar(char);
void	print_int(int);
void	print_int_list(va_list);
void	my_putstr(char *);
void	my_putstr_list(va_list);
void	my_putnbr_base(int);
void	my_putnbr_base_list(va_list);
void	print_per();
void	my_putnbr_base_octal(int);
void	my_putnbr_base_list_octal(va_list);
void	my_putnbr_base_hexl(int);
void	my_putnbr_base_list_hexl(va_list);
void	my_putnbr_base_hexc(int);
void	my_putnbr_base_list_hexc(va_list);
void	print_unsigned_int(int);
void	print_ui_list(va_list);
void	print_uint(unsigned int);
void     convert(int , int , char *);
void	adress(va_list);
void	get_adress(void *);
void	print_long(long);
void	get_adress(void *);
void	adress(va_list);
void	convert_long(unsigned long, unsigned long, char *);
int	my_printf(char *, ...);
void	get_char(va_list);
void	char_value(char *);

#endif

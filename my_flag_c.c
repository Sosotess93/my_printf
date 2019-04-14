/*
** my_putchar_c.c for my_putchar in /home/charra_s/my_printf
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Thu Nov 13 20:19:36 2014 Sofiane Charrad
** Last update Sun Nov 16 17:06:24 2014 Sofiane Charrad
*/

#include "my_printf.h"

int	my_flag_c(va_list *p)
{
  my_putchar((char) va_arg(p,int ));
  return (0);
}

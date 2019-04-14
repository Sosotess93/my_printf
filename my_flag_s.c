/*
** my_putstr_s.c for my_putstr_s in /home/charra_s/my_printf
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Thu Nov 13 20:21:07 2014 Sofiane Charrad
** Last update Sun Nov 16 17:08:27 2014 Sofiane Charrad
*/

#include "my_printf.h"

int	my_flag_s(va_list *p)
{
  my_putstr(va_arg(p, char *));
  return (0);
}

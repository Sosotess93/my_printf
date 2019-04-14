/*
** my_flag_x.c for my_flag_x in /home/charra_s/my_printf
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Sat Nov 15 17:58:09 2014 Sofiane Charrad
** Last update Sun Nov 16 00:56:24 2014 Sofiane Charrad
*/

#include "my_printf.h"

int	my_flag_x(va_list *p)
{
  my_put_nbr_hexa_uns(va_arg(p, int));
  return (0);
}

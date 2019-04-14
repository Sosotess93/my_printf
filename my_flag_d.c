/*
** my_put_nbr_d.c for my_put_nbr_d in /home/charra_s/my_printf
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Thu Nov 13 20:22:47 2014 Sofiane Charrad
** Last update Sun Nov 16 17:07:11 2014 Sofiane Charrad
*/

#include "my_printf.h"

int	my_flag_d(va_list *p)
{
  my_put_nbr(va_arg(p, int));
  return (0);
}

/*
** my_flag_o.c for flag_o in /home/charra_s/PSU_2014_my_printf
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Sun Nov 16 17:35:20 2014 Sofiane Charrad
** Last update Sun Nov 16 17:35:27 2014 Sofiane Charrad
*/

#include "my_printf.h"
#include <stdarg.h>

int	my_flag_o(va_list *p)
{
  int	nb;

  nb = va_arg(p, int);
  my_convert_to_oct_nbr(nb);
  return (0);
}

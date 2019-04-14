/*
** my_flag_b.c for flag_b in /home/charra_s/PSU_2014_my_printf
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Sun Nov 16 17:34:31 2014 Sofiane Charrad
** Last update Sun Nov 16 17:34:35 2014 Sofiane Charrad
*/

#include "my_printf.h"
#include <stdarg.h>

int	my_flag_b(va_list *p)
{
  my_convert_to_bin_nbr(va_arg(p, int));
  return (0);
}

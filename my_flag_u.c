/*
** my_flag_u.c for flag_u in /home/charra_s/PSU_2014_my_printf
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Sun Nov 16 17:37:04 2014 Sofiane Charrad
** Last update Sun Nov 16 17:37:06 2014 Sofiane Charrad
*/

#include "my_printf.h"
#include <stdarg.h>

int	my_flag_u(va_list *p)
{
  my_unsigned_nbr(va_arg(p, int));
  return (0);
}

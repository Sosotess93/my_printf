/*
** my_flag_p.c for flag_p in /home/charra_s/PSU_2014_my_printf
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Sun Nov 16 17:35:43 2014 Sofiane Charrad
** Last update Sun Nov 16 17:35:50 2014 Sofiane Charrad
*/

#include "my_printf.h"
#include <stdarg.h>

int	my_flag_p(va_list *p)
{
  my_ptr_val(va_arg(p, char *));
  return (0);
}

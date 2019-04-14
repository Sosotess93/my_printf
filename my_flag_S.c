/*
** my_flag_S.c for flag_S in /home/charra_s/PSU_2014_my_printf
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Sun Nov 16 17:36:30 2014 Sofiane Charrad
** Last update Sun Nov 16 17:36:35 2014 Sofiane Charrad
*/

#include "my_printf.h"
#include <stdarg.h>

int	my_flag_S(va_list *p)
{
  my_nputstr(va_arg(p, char *));
  return (0);
}

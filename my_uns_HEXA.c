/*
** my_uns_HEXA.c for flag_X in /home/ly_q/PSU_2014_my_printf/test/v2
** 
** Made by ibrahima ly
** Login   <ly_q@epitech.net>
** 
** Started on  Fri Nov 14 20:29:34 2014 ibrahima ly
** Last update Sat Nov 15 14:15:54 2014 ibrahima ly
*/

#include "my_printf.h"
#include <stdarg.h>

void	my_uns_HEXA(va_list ap)
{
  my_convert_to_hexa_nbr(va_arg(ap, int));
}

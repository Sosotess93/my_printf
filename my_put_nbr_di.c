/*
** my_put_nbr_di.c for di in /home/charra_s/PSU_2014_my_printf
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Sun Nov 16 17:43:43 2014 Sofiane Charrad
** Last update Sun Nov 16 17:43:52 2014 Sofiane Charrad
*/

#include "my_printf.h"
#include <stdarg.h>

void	my_put_nbr_di(va_list *p)
{
  int	nb;

  nb = va_arg(p, int);
  my_put_nbr(nb);
}

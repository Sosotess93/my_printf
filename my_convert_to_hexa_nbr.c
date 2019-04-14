/*
** my_convert_to_hexa_nbr.c for to_hexa in /home/charra_s/PSU_2014_my_printf
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Sun Nov 16 17:34:06 2014 Sofiane Charrad
** Last update Sun Nov 16 17:34:09 2014 Sofiane Charrad
*/

#include <stdarg.h>
#include <stdlib.h>
#include "my_printf.h"

char	*my_convert_to_hexa_nbr(long unsigned nb)
{
  int	i;
  char	*base_to;
  char	*res;

  base_to = "0123456789ABCDEF";
  i = 0;
  res = malloc(sizeof(char) * 300);
  while (nb > 0)
    {
      res[i] = base_to[nb % my_strlen(base_to)];
      nb = nb / my_strlen(base_to);
      i = i + 1;
    }
  res[i] = '\0';
  my_revstr(res);
  my_putstr("0x");
  my_putstr(res);
  free(res);
  return (0);
}

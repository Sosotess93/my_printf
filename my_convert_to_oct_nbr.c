/*
** my_convert_base_nbr.c for my_convert_base in /home/ly_q/PSU_2014_my_printf/
** 
** Made by ibrahima ly
** Login   <ly_q@epitech.net>
** 
** Started on  Fri Nov 14 13:02:31 2014 ibrahima ly
** Last update Sun Nov 16 16:58:25 2014 Sofiane Charrad
*/

#include <stdlib.h>
#include "my_printf.h"

char	*my_convert_to_oct_nbr(long unsigned nb)
{
  int	i;
  char	*base_to;
  char	*res;

  i = 0;
  base_to = "01234567";
  res = malloc(sizeof(char) * 300);
  if (nb < 10)
    {
      my_putchar('0');
      my_putchar('0');
    }
  if (nb > 10 && nb < 100)
    my_putchar('0');
  while (nb > 0)
    {
      res[i] = base_to[nb % my_strlen(base_to)];
      nb = nb / my_strlen(base_to);
      i = i + 1;
    }
  res[i] = '\0';
  my_revstr(res);
  my_putstr(res);
  return (res);
}

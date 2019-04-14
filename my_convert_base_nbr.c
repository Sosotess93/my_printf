/*
** my_convert_base_nbr.c for base_nbr in /home/charra_s/PSU_2014_my_printf
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Sun Nov 16 17:33:07 2014 Sofiane Charrad
** Last update Sun Nov 16 17:33:10 2014 Sofiane Charrad
*/

#include "my_printf.h"
#include <stdlib.h>

char	*my_convert_base_nbr(long unsigned nb, char *base_to)
{
  int	i;
  char	*res;

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
  if (my_strlen(base_to) == 16)
    my_putstr("0x");
  my_putstr(res);
  free(res);
  return (res);
}

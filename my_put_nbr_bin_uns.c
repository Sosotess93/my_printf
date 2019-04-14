/*
** my_put_nbr_hexa.c for hexa in /home/charra_s/my_printf
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Sat Nov 15 17:25:42 2014 Sofiane Charrad
** Last update Sun Nov 16 17:42:26 2014 Sofiane Charrad
*/

#include <stdlib.h>

int	*my_put_nbr_bin(long unsigned nb)
{
  int	i;
  char	*baseto;
  char	*res;

  baseto = "01";
  i = 0;
  res = malloc(sizeof(char) *300);
  while (nb > 0)
    {
      res[i] = baseto[nb % my_strlen(baseto)];
      nb = nb / my_strlen(baseto);
      i = i + 1;
    }
  res[i] = '\0';
  my_revstr(res);
  my_putstr(res);
  free(res);
}

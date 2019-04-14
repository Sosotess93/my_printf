/*
** my_evil_str.c for my_evil_str in /home/santuc_f//piscine/Jour_04
** 
** Made by felix santucci
** Login   <santuc_f@epitech.net>
** 
** Started on  Thu Oct  7 09:21:36 2010 felix santucci
** Last update Sun Nov 16 07:28:19 2014 Sofiane Charrad
*/

#include "my_printf.h"

char	*my_revstr(char *str)
{
  char	c;
  int	i;
  int	j;

  i = 0;
  j = my_strlen(str) - 1;
  while (i < j)
    {
      c = str[i];
      str[i] = str[j];
      str[j] = c;
      i = i + 1;
      j = j - 1;
    }
  return (str);
}

/*
** my_nputstr.c for nputstr in /home/charra_s/PSU_2014_my_printf
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Sun Nov 16 17:37:47 2014 Sofiane Charrad
** Last update Sun Nov 16 17:38:13 2014 Sofiane Charrad
*/

#include "my_printf.h"

int	my_nputstr(char *str)
{
  int	i;
  int	nb;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 32 || str[i] >= 127)
	{
	  my_putchar('\\');
	  nb = str[i];
	  my_convert_to_oct_nbr(nb);
	}
      else
	my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}

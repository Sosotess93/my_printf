/*
** my_putstr.c for my_putstr in /home/charra_s/Piscine_C_J04
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Thu Oct  2 10:47:25 2014 Sofiane Charrad
** Last update Sun Nov 16 17:51:39 2014 Sofiane Charrad
*/

#include "my_printf.h"

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

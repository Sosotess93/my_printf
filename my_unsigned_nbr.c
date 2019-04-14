/*
** my_unsigned_nbr.c for my_unsigned_nbr in /home/ly_q/PSU_2014_my_printf
** 
** Made by ibrahima ly
** Login   <ly_q@epitech.net>
** 
** Started on  Fri Nov 14 11:57:37 2014 ibrahima ly
** Last update Sat Nov 15 18:11:10 2014 ibrahima ly
*/

#include "my_printf.h"

int	my_unsigned_nbr(int nb)
{
  int rev;

  rev = 1;
  if (nb < 0)
    {
      my_putstr("Error: signed int\n");
      return (0);
    }
  while (nb / rev <= -10)
    rev = rev * 10;
  while (rev != 0)
    {    
      my_putchar(((nb / rev) % 10) + '0');
      rev = rev / 10;
    }
  return (0);
}

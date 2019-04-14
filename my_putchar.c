/*
** my_putchar.c for my_putchar in /home/charra_s/varargs
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Wed Nov 12 21:18:50 2014 Sofiane Charrad
** Last update Sun Nov 16 07:18:37 2014 Sofiane Charrad
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

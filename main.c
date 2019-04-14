/*
** main.c for main in /home/charra_s/my_printf
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Sat Nov 15 15:11:37 2014 Sofiane Charrad
** Last update Tue Apr 12 16:00:57 2016 Charrad Sofiane
*/

#include <stdlib.h>
#include "my_printf.h"
#include <stdio.h>

int	main()
{
  my_printf("Hello ofnr %    d, hi OOO\n", 1234);
  my_putchar('\n');
  printf("Hello ofnr % d, hi OOO\n", 1234);
  my_putchar('\n');
  return (0);
}

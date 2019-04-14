/*
** my_ptr_val.c for ptr_val in /home/charra_s/PSU_2014_my_printf
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Sun Nov 16 17:40:05 2014 Sofiane Charrad
** Last update Sun Nov 16 17:40:11 2014 Sofiane Charrad
*/

#include <stdio.h>
#include "my_printf.h"

int	my_ptr_val(char *str)
{
  my_convert_base_nbr((long unsigned)str, "0123456789ABCDEF");
  return (0);
}

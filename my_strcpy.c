/*
** my_strcpy.c for my_strcpy in /home/ly_q/Piscine_C_J06/ex_01
** 
** Made by ibrahima ly
** Login   <ly_q@epitech.net>
** 
** Started on  Mon Oct  6 16:28:50 2014 ibrahima ly
** Last update Sat Nov 15 14:12:19 2014 ibrahima ly
*/

#include <stdlib.h>

char	*my_strcpy(char *dest, char *src)
{
  int	a;

  a = 0;
  if (src == NULL)
    return (NULL);
  while (dest[a] != '\0')
    {
      dest[a] = src[a];
      a = a + 1;
    }
  return (dest);
}

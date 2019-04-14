/*
** my_printf.c for my_printf in /home/charra_s/my_printf
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Thu Nov 13 20:08:12 2014 Sofiane Charrad
** Last update Sun Nov 16 23:25:48 2014 Sofiane Charrad
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my_printf.h"

const	t_ptr	g_func[13] =
  {
    {'d', &my_flag_d},
    {'i', &my_flag_d},
    {'o', &my_flag_o},
    {'x', &my_flag_x},
    {'X', &my_flag_x},
    {'u', my_flag_u},
    {'c', &my_flag_c},
    {'s', &my_flag_s},
    {'p', &my_flag_p},
    {'b', &my_flag_b},
    {'S', &my_flag_S},
    {'%', &my_put_flag},
    {0 , NULL}
  };

int	space(const char *fmt, int i)
{
  i = i + 1;
  if (fmt[i] == ' ')
    while (fmt[i] == ' ')
      i = i + 1;
  return (i);
}

int		my_printf(const char *fmt, ...)
{
  va_list	ap;
  t_list	list;

  list.i = 0;
  va_start(ap, fmt);
  while (fmt[list.i] != '\0')
    {
      if (fmt[list.i] == '%')
	{
	  list.i = space(fmt, list.i);
	  list.flag = 0;
	  while ((g_func[list.flag].c) != '\0')
	    {
	      if ((g_func[list.flag]).c == fmt[list.i])
		g_func[list.flag].func(&ap);
	      list.flag = list.flag + 1;
	    }
	}
      else
	my_putchar(fmt[list.i]);
      list.i = list.i + 1;
    }
  va_end(ap);  
  return (list.i);
}

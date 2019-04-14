/*
** printf.h for printf.h in /home/charra_s/my_printf
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Thu Nov 13 18:58:31 2014 Sofiane Charrad
** Last update Sun Nov 16 23:24:51 2014 Sofiane Charrad
*/

#ifndef		__PRINTF_H__
# define	__PRINTF_H__
#include	<stdarg.h>

typedef int (*ptr_func)(va_list *p);

typedef	struct	s_ptr
{
  char		c;
  ptr_func	func;
}		t_ptr;

typedef struct	s_list
{
  int	i;
  int	flag;
}
		t_list;
int	space(const char *fmt, int i);
int	my_printf(const char *fmt, ...);
int	my_flag(char c);
int	my_flag_d(va_list *p);
int	my_flag_c(va_list *p);
int	my_flag_s(va_list *p);
int	my_flag_o(va_list *p);
int	my_flag_x(va_list *p);
int	my_flag_u(va_list *p);
int	my_flag_p(va_list *p);
int	my_flag_b(va_list *p);
int	my_flag_S(va_list *p);
int	my_put_flag();
int	my_nputstr(char *str);
int	my_unsigned_nbr(int nb);
int	my_ptr_val(char *str);
char	*my_convert_to_bin_nbr(long unsigned nb);
char	*my_convert_base_nbr(long unsigned nb, char *base_to);
char	*my_convert_to_oct_nbr(long unsigned nb);
int	*my_put_nbr_hexa_uns(long unsigned nb);
void	my_putchar(char c);
void	my_putstr(char *str);
int	my_put_nbr(int nb);
int	my_strlen(char *str);
char	*my_revstr(char *str);
char	*my_strcpy(char *dest, char *src);

#endif		/*__PRINTF_H__*/

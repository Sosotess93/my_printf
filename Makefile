##
## Makefile for Makefile in /home/charra_s/my_printf
## 
## Made by Sofiane Charrad
## Login   <charra_s@epitech.net>
## 
## Started on  Thu Nov 13 20:09:25 2014 Sofiane Charrad
## Last update Sun Nov 16 16:43:08 2014 Sofiane Charrad
##


CC	=	gcc

RM	=	rm -f

CFLAGS	+=	-g -Werror -Wextra -pedantic -ansi -Wall

NAME	=	libmy.a

SRC	=	my_printf.c \
		my_strcpy.c \
		my_nputstr.c \
		my_unsigned_nbr.c \
		my_putchar.c \
		my_put_nbr.c \
		my_putstr.c \
		my_ptr_val.c \
		my_convert_to_bin_nbr.c \
		my_convert_base_nbr.c \
		my_convert_to_oct_nbr.c \
		my_flag_d.c \
		my_flag_u.c \
		my_flag_p.c \
		my_flag_S.c \
		my_put_flag.c \
		my_flag_c.c \
		my_flag_p.c \
		my_flag_s.c \
		my_flag_d.c \
		my_flag_x.c \
		my_flag_o.c \
		my_flag_b.c \
		my_strlen.c \
		my_revstr.c \
		my_put_nbr_hexa_uns.c \
		main.c

OBJ	=	$(SRC:.c=.o)



$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all : $(NAME) clean

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

##
## Makefile for makefile in /home/lnanaay/Downloads
## 
## Made by LEBON Nathan
## Login   <lnanaay@epitech.net>
## 
## Started on  Sat Oct 15 19:14:21 2016 LEBON Nathan
## Last update Sat Nov 12 12:04:38 2016 Nathan Lebon
##



SRCS		= printf.c		\
		  functions.c		\
		  hex.c			\
		  my_putnbr_base.c	\
		  my_putstr.c		\
		  pointer.c		\
		  print_octal.c		\
		  str_oct.c		\
		  unsigned.c

OBJS		= $(SRCS:.c=.o)

NAME		= libmy.h

RM		= rm -rf

all:		  $(NAME)

$(NAME):	  $(OBJS)
		  ar rc $(NAME) $(OBJS)
clean:
		  $(RM) $(OBJS)

fclean: 	  clean
		  $(RM) $(NAME)

re : 		  fclean all

.PHONY: all clean fclean re

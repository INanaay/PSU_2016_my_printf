##
## Makefile for makefile in /home/lnanaay/Downloads
## 
## Made by LEBON Nathan
## Login   <lnanaay@epitech.net>
## 
## Started on  Sat Oct 15 19:14:21 2016 LEBON Nathan
## Last update Tue Nov  8 10:29:57 2016 Nathan Lebon
##



SRCS		= disp_stdarg.c	\
		  sum_stdarg.c

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

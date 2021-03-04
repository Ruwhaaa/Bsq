##
## EPITECH PROJECT, 2017
## File description:
## Makefile
##

SRCC = ./src/

SRC	=	$(SRCC)BSQ.c		\
		$(SRCC)read_return.c	\
		$(SRCC)main.c		\
		$(SRCC)algo.c		\
		$(SRCC)free_alloc.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Iinclude -g

LDFLAGS	=	-lm -Llib/my/ -lmy -lc_graph_prog

NAME	=	bsq

$(NAME):	 $(OBJ)
	make -C lib/my
	gcc -o $(NAME) $(OBJ) $(LDFLAGS)

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

##
## EPITECH PROJECT, 2021
## workshop-rebirth-csfml
## File description:
## Makefile
##

CC 			= gcc

SRC 		= main.c

OBJ 		= $(SRC:.c=.o)

CFLAGS 		= -I ./include

NAME 		= workshop

RM_F		= rm -f

all:		$(NAME)

$(NAME): 	$(OBJ)
			$(CC) -o $(NAME) $(OBJ) -lcsfml-graphics -lcsfml-window -lcsfml-system

clean:
			$(RM_F) $(OBJ)

fclean:		clean
			$(RM_F) $(NAME)

re:			fclean all

.PHONY:		all $(NAME) clean fclean re

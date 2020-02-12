NAME	=	push_swap

SRC	=	src/head.c \
		src/my_getnbr.c \
		src/sa_sb_sc.c \
		src/ra_rb_rr.c \
		src/rra_rrb_rrr.c \
		src/pa_pb.c \
		src/find_small.c \
		src/pop.c \
		src/algor.c

OBJ	=	$(SRC:.c=.o)

all	:	$(NAME)

$(NAME) :	$(OBJ)
		gcc $(SRC) -o $(NAME) -g3

clean	:
		rm -f $(OBJ)

fclean  :	clean
		rm -f $(NAME)

re	:	fclean all
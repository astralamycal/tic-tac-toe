# Makefile

NAME = tic-tac-toe

SRCS = main.c \
	functions/tic_tac_toe.c \
	functions/print_tab.c

all: $(NAME)

$(NAME): $(SRCS)
	gcc $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all
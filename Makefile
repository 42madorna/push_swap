NAME = push_swap

SRCS =	helper/init.c \
		helper/tools.c \
		helper/checks.c \
		functions/operations.c \
		functions/operations2.c \
		push_swap.c

FLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

LIBFT= ./libft/libft.a

CC = gcc

.PHONY: all clean fclean re

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(LIBFT) $(OBJS) 
	$(CC) $(FLAGS) $(SRCS) -Iincludes $(INCL) -o $(NAME) $(LIBFT)

$(LIBFT):
	@make bonus -C ./libft/

clean:
	@make clean -C ./libft/
	@rm -rf $(OBJS)
	@echo "cleaning .o files"

fclean: clean
	@make fclean -C ./libft/
	@rm -rf $(NAME)

re: fclean all

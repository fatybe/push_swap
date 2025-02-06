CC = cc

NAME = push_swap

CFLAGS = -g -Wall -Wextra -Werror

SRCS = ft_error.c ft_utils1.c ft_utils2.c full_stack.c push_swap.c check_duplicat.c operation1.c operation2.c sort_stack.c sort_utils.c sort_utils2.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(OBJS) -o $(NAME) 

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
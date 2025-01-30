CC = cc

NAME = push_swap

CFLAGS = -g -Wall -Wextra -Werror

SRCS = check_args.c check_errors.c function1.c operations1.c operations2.c push_swap.c sort_stack.c

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
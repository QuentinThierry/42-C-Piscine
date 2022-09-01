SRCS= operators.c

OBJECTS= ${SRCS:.c=.o}

NAME= do-op

CC= gcc

CFLAGS= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(CFLAGS) $(OBJECTS) do_op.c -o $@

%.o: %.c
	@$(CC) $(CFLAGS) -o $@ -c $^

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: re fclean all clean

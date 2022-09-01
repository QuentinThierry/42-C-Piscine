SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJECTS = ${SRCS:.c=.o}

INCLUDES= includes/

NAME = libft.a

CC= gcc

RM= rm -f

CFLAGS= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $^ -I $(INCLUDES)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re fclean all clean

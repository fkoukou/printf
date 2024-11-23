NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror

SRC_FILES = ft_putchar.c ft_putnbr.c ft_putstr.c ft_printf.c   ft_printf1.c ft_putnbr_lower.c ft_putnbr_upper.c ft_putunsigned.c ft_putpoint.c


OBJ = $(SRC_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $@ $^

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

CC = gcc

CFLAGS = -Wall -Werror -Wextra

CFILES = ft_atoi.c \
ft_itoa.c \
ft_printchar.c \
ft_printex.c \
ft_printf.c \
ft_printnumber.c \
ft_printptr.c \
ft_printstring.c \
ft_putchar_fd.c \
ft_putnbr_fd.c \
ft_putstr_fd.c \
ft_strlen.c

OFILES = $(CFILES:.c=.o)

NAME = libftprintf.a

#rules

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
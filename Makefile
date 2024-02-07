CC = gcc

CFLAGS = -Wall -Werror -Wextra

CFILES = ft_printchar.c \
ft_printhex.c \
ft_printf.c \
ft_printnumber.c \
ft_printptr.c \
ft_printstring.c \
ft_printunsigned.c \
ft_strlen.c

OFILES = $(CFILES:.c=.o)

NAME = libftprintf.a

#rules

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
CC = gcc

CFLAGS = -Wall -Werror -Wextra

CFILES = 

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
Library = libft.a

files = ft_bzero.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_strlen.c\
		strlcpy.c\
		strlcat.c\
		


Compiler = cc

CmpFlags = -Wall -Wextra -Werror

OFILES = $(files:.c=.o)

NAME = $(OUTN)

$(NAME):
	$(Compiler) $(CmpFlags) -c -I/
	ar -rc $(Library) $(OFILES)

all: $(NAME)

clean:
	rm -f $(NAME)
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
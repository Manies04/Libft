# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tiade-al <tiade-al@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 11:41:01 by tiade-al          #+#    #+#              #
#    Updated: 2024/04/22 00:02:47 by tiade-al         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strnstr.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_split.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\

bonus = ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstsize.c\
		ft_lstlast.c\
		ft_lstadd_back.c\
		ft_lstdelone.c\

Compiler = cc

CmpFlags = -Wall -Wextra -Werror

OFILES = $(files:.c=.o)

OBONUS = $(bonus:.c=.o)

NAME = $(Library)

$(NAME): $(OFILES) $(OBONUS)
	$(Compiler) $(CmpFlags) -c $(files) $(bonus) -I./
	ar -rc $(Library) $(OFILES) $(OBONUS)

all: $(NAME)

clean:
	rm -f $(NAME)
	rm -f $(OFILES) $(OBONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
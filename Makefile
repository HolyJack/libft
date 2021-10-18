# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ejafer <ejafer@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/15 20:15:28 by ejafer            #+#    #+#              #
#    Updated: 2021/10/18 19:05:30 by ejafer           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TRGT		=	libft.a

SRC			=	ft_atoi.c		ft_bzero.c		ft_calloc.c\
				ft_isalnum.c	ft_isalpha.c	ft_isascii.c\
				ft_isdigit.c	ft_isprint.c	ft_itoa.c\
				ft_memchr.c		ft_memcmp.c		ft_memcpy.c\
				ft_memmove.c	ft_memset.c		ft_putchar_fd.c\
				ft_putendl_fd.c	ft_putnbr_fd.c	ft_putstr_fd.c\
				ft_split.c		ft_strchr.c		ft_strdup.c\
				ft_striteri.c	ft_strjoin.c	ft_strlcat.c\
				ft_strlcpy.c	ft_strlen.c		ft_strmapi.c\
				ft_strncmp.c	ft_strnstr.c	ft_strnstr.c\
				ft_strrchr.c	ft_strtrim.c	ft_substr.c\
				ft_tolower.c	ft_toupper.c	ft_memccpy.c

SRC_BONUS	=	ft_lstnew.c			ft_lstadd_front.c\
				ft_lstsize.c		ft_lstlast.c\
				ft_lstadd_back.c	ft_lstclear.c\
				ft_lstiter.c		ft_lstmap.c\
				ft_lstdelone.c


OBJ			=	$(SRC:.c=.o)
OBJ_BONUS	=	$(SRC_BONUS:.c=.o)

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

all: ${TRGT}

$(TRGT): ${OBJ}
		ar rcs ${TRGT} ${OBJ}

bonus: $(OBJ_BONUS)
		ar rcs ${TRGT} ${OBJ_BONUS}

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f ${OBJ} ${OBJ_BONUS}

fclean: clean
	@rm -f ${TRGT}

re:	fclean all

.PHONY	: re fclean clean bonus all
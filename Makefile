# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: echin <echin@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/24 12:29:34 by echin             #+#    #+#              #
#    Updated: 2021/01/16 14:13:55 by echin            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re bonus

NAME		= libft.a

SRCS		= $(addprefix ft_, memset.c bzero.c memcpy.c memccpy.c memmove.c \
				memchr.c memcmp.c strlen.c isalpha.c isdigit.c \
				isalnum.c isascii.c isprint.c toupper.c tolower.c \
				strchr.c strrchr.c strncmp.c strlcpy.c strlcat.c \
				strnstr.c atoi.c calloc.c strdup.c substr.c \
				strjoin.c strtrim.c split.c itoa.c strmapi.c \
				putchar_fd.c putstr_fd.c putendl_fd.c putnbr_fd.c)
OBJS		= $(SRCS:.c=.o)
BONUS		= $(addprefix ft_, lstnew.c lstadd_front.c lstsize.c lstlast.c \
				lstadd_back.c lstdelone.c lstclear.c lstiter.c lstmap.c)
BONUS_OBJS 	= $(BONUS:.c=.o)
INCLUDE		= .
CC			= clang
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f
AR			= ar -rcs

%.o:		%.c
			$(CC) $(CFLAGS) -c $< -I $(INCLUDE) -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			$(AR) $@ $^

bonus:		$(NAME) $(BONUS_OBJS)
			$(AR) $^

clean:		
			$(RM) $(OBJS) $(BONUS_OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

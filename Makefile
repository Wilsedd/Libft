# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wisedeau <wisedeau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/22 19:53:53 by wisedeau          #+#    #+#              #
#    Updated: 2025/04/25 19:02:33 by wisedeau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

HEADER = libft.h

SRCS =	ft_isalpha.c \
		ft_isdigit.c \
        ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c
OBJS            = $(SRCS:.c=.o)

MANPATH = $(addprefix , $(SRCS))

CC                = cc
RM                = rm -f
CFLAGS            = -Wall -Wextra -Werror

all:            $(NAME)

$(NAME):		$(MANPATH) $(HEADER)
				cc $(FLAGS) -o $(NAME) $(MANPATH)

clean:
				$(RM) $(OBJS)

fclean:            clean
				$(RM) $(NAME)

re:                fclean $(NAME)

.PHONY:            all clean fclean re 
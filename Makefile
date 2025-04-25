# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wisedeau <wisedeau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/22 19:53:53 by wisedeau          #+#    #+#              #
#    Updated: 2025/04/25 20:30:33 by wisedeau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME = libft.a

# HEADER = libft.h

# SRCS =	ft_isalpha.c \
# 		ft_isdigit.c \
#         ft_isalnum.c \
# 		ft_isascii.c \
# 		ft_isprint.c \
# 		ft_strlen.c \
# 		ft_memset.c \
# 		ft_bzero.c \
# 		ft_memcpy.c
		
# OBJS            = $(SRCS:.c=.o)

# #MANPATH = $(addprefix , $(SRCS))

# CC                = cc
# RM                = rm -f
# CFLAGS            = -Wall -Wextra -Werror

# all:            $(NAME)

# $(NAME):		$(MANPATH) $(HEADER)
# 				cc $(FLAGS) -o $(NAME) $(MANPATH)

# clean:
# 				$(RM) $(OBJS)

# fclean:            clean
# 				$(RM) $(NAME)

# re:                fclean $(NAME)

# .PHONY:            all clean fclean re 


NAME = libft.a

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

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wilsed <wilsed@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/22 19:53:53 by wisedeau          #+#    #+#              #
#    Updated: 2025/05/09 06:07:01 by wilsed           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME = libft

# HEADER = libft.h

# SRCS =	ft_isalpha.c \
# 		ft_isdigit.c \
#     	ft_isalnum.c \
# 		ft_isascii.c \
# 		ft_isprint.c \
# 		ft_strlen.c \
# 		ft_memset.c \
# 		ft_bzero.c \
# 		ft_memcpy.c \
# 		ft_memmove.c \
# 		ft_strlcpy.c \
# 		ft_strlcat.c \
# 		ft_toupper.c \
# 		ft_tolower.c \
# 		ft_strchr.c \
# 		ft_strrchr.c \
# 		ft_strncmp.c \
# 		ft_memchr.c \
# 		ft_memcmp.c \
# 		ft_strnstr.c \
# 		ft_atoi.c \
# 		ft_calloc.c \
# 		ft_strdup.c \
# 		ft_substr.c \
# 		ft_strjoin.c \
# 		ft_strtrim.c \
# 		ft_split.c \
# 		ft_itoa.c \
#		ft_strmapi.c \
#		ft_striteri.c \
#		ft_putchar_fd.c \
#		ft_putstr_fd.c \
#		ft_putendl_fd.c \
#		ft_putnbr_fd.c \

# SRCS_BONUS = 	ft_lstnew_bonus.c \
#				ft_lstadd_front_bonus.c \
#				ft_lstsize_bonus.c \
#				ft_lstlast_bonus.c \
#				ft_lstadd_back_bonus.c \
#				ft_lstdelone_bonus.c \
#				ft_lstclear_bonus.c \

# OBJS = $(SRCS:.c=.o)
# OBJS_BONUS = $(SRCS_BONUS:.c=.o)

# MANPATH = $(addprefix , $(SRCS))

# CC                = cc
# RM                = rm -f
# CFLAGS            = -Wall -Wextra -Werror

# all:            $(NAME)

# $(NAME):		$(MANPATH) $(HEADER)
# 				cc $(FLAGS) -o $(NAME) $(MANPATH)

# bonus: $(NAME) $(OBJS_BONUS)
#		$(AR) $(NAME) $(OBJS_BONUS)

# clean:
# 				$(RM) $(OBJS) $(OBJS_BONUS)

# fclean:            clean
# 				$(RM) $(NAME)

# re:                fclean $(NAME)

# .PHONY:            all bonus clean fclean re 


#Makefile Francinette et a rendre je pense :
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
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

SRCS_BONUS = 	ft_lstnew_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c \

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs #creer la bibliotheque statique
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

%.o: %.c $(HEADER)
		$(CC) $(CFLAGS) -c $< -o $@

bonus: $(NAME) $(OBJS_BONUS)
		$(AR) $(NAME) $(OBJS_BONUS)

clean:
		$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re

# Si on modifies libft.h, le Makefile saura que tous les .o doivent être recompilés même si les .c n'ont pas changé !
# Sinon, make ne recompilera pas et le programme risquera d'utiliser une vieille version des .o.
# La règle %.o: %.c $(HEADER) dit : Pour chaque .c, compile en .o en appliquant $(CFLAGS) (donc -Wall -Wextra -Werror) !
# Ensuite, $(AR) regroupe les .o dans libft.a.
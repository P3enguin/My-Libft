# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybensell <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 09:37:29 by ybensell          #+#    #+#              #
#    Updated: 2021/11/10 08:49:13 by ybensell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a
SRC = ft_atoi.c ft_isascii.c ft_memcpy.c ft_putstr_fd.c ft_strlcat.c ft_strrchr.c\
	  ft_bzero.c ft_isdigit.c ft_memmove.c ft_split.c ft_strlcpy.c ft_strtrim.c\
	  ft_calloc.c ft_isprint.c ft_memset.c ft_strchr.c ft_strlen.c ft_substr.c\
	  ft_itoa.c ft_putchar_fd.c ft_strdup.c ft_strmapi.c\
	  ft_tolower.c ft_isalnum.c ft_memchr.c ft_putendl_fd.c ft_striteri.c\
	  ft_strncmp.c ft_toupper.c ft_isalpha.c ft_memcmp.c ft_putnbr_fd.c\
	  ft_strjoin.c ft_strnstr.c
	
OBJ = $(SRC:.c=.o)
cc = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -f
LIB = libft.h
BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
		ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
		ft_lstclear_bonus.c ft_lstiter_bonus.c
OBJ_BONUS = $(BONUS:.c=.o)


all: $(NAME)

$(NAME): $(OBJ) $(LIB)
	$(AR) $(NAME) $(OBJ)

bonus : $(OBJ_BONUS)
	$(AR) $(NAME) $(OBJ_BONUS)	
	
%.o: %.c $(SRC) $(BONUS) 
	$(cc) $(CFLAGS) -c $(SRC) $(BONUS) 

clean:
	$(RM) $(OBJ) $(OBJ_BONUS)	

fclean:	clean
	$(RM) $(NAME)
	
re: fclean all





	

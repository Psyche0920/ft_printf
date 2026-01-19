# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wehan <wehan@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/05 12:53:45 by wehan             #+#    #+#              #
#    Updated: 2025/11/06 21:21:28 by wehan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libftprintf.a

SRC = ft_printf.c \
	ft_putchar.c ft_putnbr.c ft_putunsignedint.c ft_putstr.c \
	ft_puthexlower.c ft_puthexupper.c ft_putpointer.c

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIBFT_DIR)
	$(AR) $(NAME) $(OBJ) $(LIBFT)
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re

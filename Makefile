# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhrandri <rhrandri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/27 12:14:36 by rhrandri          #+#    #+#              #
#    Updated: 2026/02/27 12:14:42 by rhrandri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = gnl.a
CFLAGS = -Wall -Werror -Wextra
CC = cc
AR = ar rcs

SRC = get_next_line \
      get_next_line_utils

SRCS = $(addsuffix .c, $(SRC))
OBJS = $(addsuffix .o, $(SRC))

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

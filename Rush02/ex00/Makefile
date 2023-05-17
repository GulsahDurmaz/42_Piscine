# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldemetz <ldemetz@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/02 19:45:47 by ldemetz           #+#    #+#              #
#    Updated: 2023/04/02 19:45:47 by ldemetz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
SRCS = src/main.c src/utils.c src/dict.c src/main_utils.c src/dict_utils.c
OBJS = $(SRCS:.c=.o)
FLAGS = -Wall -Werror -Wextra
INCLUDES = -Iincludes

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${FLAGS} ${INCLUDES} ${OBJS} -o ${NAME}

%.o: %.c
	${CC} -c $< -o $@ ${INCLUDES} ${FLAGS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
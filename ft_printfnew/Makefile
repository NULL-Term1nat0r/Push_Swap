# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/31 13:07:12 by estruckm          #+#    #+#              #
#    Updated: 2023/01/07 14:28:49 by estruckm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
# Name des kompilierten Programms
SRCS	=	ft_printf.c ft_putchar.c ft_flagcheck.c ft_putstr.c ft_putnbr_base.c ft_puthex.c ft_putpointer.c ft_numlen_base.c
# Hier alle zu kompilierenden .c-Dateien erfassen
OBJS	=	${SRCS:.c=.o}
# Damit nur veränderte .c-Dateien in .o-Dateien kompiliert werden
SUB_DIRECTORIES	= libft
# auflistung aller Subdirectories
OBJS_SUB = $(shell find $(SUB_DIRECTORIES) -type f -name "*.o")
RM		=	rm -f
# -f (force) macht fclean jederzeit ausführbar (auch ohne .o-Dateien)
CC		=	cc
# Kompiliersprache
CFLAGS	=	-Wall -Wextra -Werror

MAIN = main.c

MAGENTA = \033[0;95m

all:		${NAME}

# Die verwendeten Flags
${NAME}:	makelibft ${OBJS}
			ar rcs ${NAME} ${OBJS}

compile:
			$(CC) $(MAIN) $(NAME)

makelibft:
			@echo "$(MAGENTA)Compiling:"
			MAKE -C libft
			cp libft/libft.a ${NAME}
clean:
			${RM} ${OBJS}
			${RM} $(shell find $(SUB_DIRECTORIES) -type f -name "*.o")
# Löscht die .o-Dateien und die .o-Datein der Subdirectories
fclean:		clean
			${RM} ${NAME}
			${RM} $(shell find $(SUB_DIRECTORIES) -type f -name "*.a")
# Löscht die .a- und exe-Dateien und die .a-Dateien der Subdirectories
re:			fclean all
# Löscht und rekompiliert
.PHONY:		all clean fclean re
# Führt die Befehle aus, auch wenn eine gleichnamige Datei existiert

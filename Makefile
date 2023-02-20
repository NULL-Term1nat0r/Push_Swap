# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/31 13:07:12 by estruckm          #+#    #+#              #
#    Updated: 2023/02/20 19:07:59 by estruckm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap.a
# Name des kompilierten Programms
SRCS	=	ft_count_stack.c ft_free_list.c ft_get_pivot_element.c ft_second_last.c ft_last.c ft_push_front.c ft_count_arg.c ft_ps_atoi.c ft_error.c ft_check_repeat.c ft_sort.c ft_sort_small_a.c ft_sort_small_b.c ft_check_sort.c ft_sa.c ft_sb.c ft_sort_three_a.c ft_rra.c ft_rrb.c ft_ra.c ft_rb.c ft_pa.c ft_pb.c ft_quicksort_a.c ft_quicksort_b.c ft_push.c ft_return.c ft_empty_b.c

# Hier alle zu kompilierenden .c-Dateien erfassen
OBJS	=	${SRCS:.c=.o}
# Damit nur veränderte .c-Dateien in .o-Dateien kompiliert werden
SUB_DIRECTORIES	= ft_printf
# auflistung aller Subdirectories
OBJS_SUB = $(shell find $(SUB_DIRECTORIES) -type f -name "*.o")
RM		=	rm -f
# -f (force) macht fclean jederzeit ausführbar (auch ohne .o-Dateien)
CC		=	cc
# Kompiliersprache
CFLAGS	= -Wall -Wextra -Werror

DEBUGGER = -g

MAIN = push_swap.c

MAGENTA = \033[0;95m
GREEN = \033[31;42m

all:		${NAME}

# Die verwendeten Flags
${NAME}:	makelibft ${OBJS}
			ar rcs ${NAME} ${OBJS}

compile:
			$(CC) $(MAIN) $(SRCS) $(NAME) $(DEBUGGER)

makelibft:
			@echo "$(GREEN)Compiling:\n"

			@echo "@     @  @     @  @        @       @ @ @ @ @ @@"
			@echo "@ @   @  @     @  @        @           @     "
			@echo "@  @  @  @     @  @        @           @     @"
			@echo "@   @ @  @     @  @        @           @     @"
			@echo "@     @  @ @ @ @  @ @ @ @  @ @ @ @     @     @\n"
#$(shell banner -w 20 test)
			MAKE -C ft_printf
			cp ft_printf/libftprintf.a ${NAME}
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
easy: 		makelibft clean
			$(CC) $(MAIN) $(SRCS) $(NAME) $(DEBUGGER)

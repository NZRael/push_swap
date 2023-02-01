SRCS = ./ft_printf.c ./ft_arguments.c ./ft_printf_utils.c
OBJS = ${SRCS:.c=.o}
GCC = gcc -Wall -Wextra -Werror
NAME = libftprintf.a
HEAD = -I ./ft_printf.h

all : $(NAME)

$(NAME) :
		@${GCC} ${HEAD} -c ${SRCS}
		@ar -rcs ${NAME} ${OBJS}

clean:
		@rm -f ${OBJS}

fclean:
		@rm -f ${OBJS}
		@rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re

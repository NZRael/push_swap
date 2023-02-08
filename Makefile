SRCS = ./ft_push_swap_utils.c ./ft_sortswap.c ./ft_verifs.c \
	./ft_swap1.c ./ft_swap2.c ./ft_swap3.c ./push_swap.c \
	./ft_sort_utils.c

OBJS = ${SRCS:.c=.o}

GCC = gcc -Wall -Wextra -Werror
NAME = push_swap

HEAD = -I .push_swap.h

MAKE = make

all : $(NAME)

make :
	@${MAKE} -C ./ft_printfpushswap
	@${MAKE} -C ./libft


$(NAME) : make
	@$(GCC) $(HEAD) -o ${NAME} ${SRCS} -L ./libft -lft -L ./ft_printfpushswap -lftprintf

clean :
	@rm -f $(OBJS)
	@$(MAKE) clean -C ./ft_printfpushswap
	@$(MAKE) clean -C ./libft

fclean : clean
	@rm -f ${NAME}
	@$(MAKE) fclean -C ft_printfpushswap
	@$(MAKE) fclean -C libft

re : fclean all

.PHONY : all make clean fclean re

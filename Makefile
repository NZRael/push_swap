SRCS = ft_push_swap_utils.c ft_sortswap.c ft_verifs.c ft_swap1.c ft_swap2.c ft_swap3.c push_swap.c
OBJS = ${SRCS:.c=.o}
GCC = gcc -Wall -Wextra -Werror
NAME = push_swap
HEAD = -I push_swap.h
MAKE = make

all : $(NAME)

$(NAME) :
	@${MAKE} -C ft_printfpushswap
	@cp ft_printfpushswap/libftprintf.a $(NAME)
	@${MAKE} -C libft
	@cp libft/libft.a $(NAME)
	@$(GCC) $(HEAD) -c ${SRCS}
	@ar -rcs $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)
	@$(MAKE) clean -C ft_printfpushswap
	@$(MAKE) clean -C libft

fclean : clean
	rm -f $(NAME)
	@$(MAKE) fclean -C ft_printfpushswap
	@$(MAKE) fclean -C libft

re : fclean all

.PHONY : all clean fclean re

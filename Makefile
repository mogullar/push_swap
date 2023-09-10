NAME = push_swap

SRCS =  ft_lstsize.c ft_push.c ft_rev_rotate.c ft_rotate.c ft_swap.c \
		ft_utils.c ft_utils2.c ft_utils3.c ft_utils4.c main.c error_n_free.c \
		ft_sort.c ft_sort_1.c radix.c

OBJS = $(SRCS:.c=.o)

CC = gcc

AFLAGS =  -Wall -Wextra -Werror -g

RM = rm -rf

all :$(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(AFLAGS) -o $(NAME)

fclean : clean
	rm -rf $(NAME)

clean :
	rm -rf $(OBJS)

re : fclean all

.PHONY : all fclean clean re
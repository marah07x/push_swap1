
NAME        = push_swap
CC          = cc
CFLAGS      = -Wall -Wextra -Werror
PRINTF_DIR  = printf
PRINTF      = $(PRINTF_DIR)/libftprintf.a
LIBFT_DIR   = $(PRINTF_DIR)/libft42
LIBFT       = $(LIBFT_DIR)/libft.a
SRCS        = main.c parser.c value_checks.c swap_operations.c push_operations.c lst_pop.c rotate_operations.c reverse_operations.c disorder.c chunk_based_sort.c operations_count.c selection_sort.c
OBJS        = $(SRCS:.c=.o)
INCLUDES    = -I. -I$(PRINTF_DIR) -I$(LIBFT_DIR)

all: $(NAME)

$(NAME): $(PRINTF) $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(PRINTF) $(LIBFT) -o $(NAME)

$(PRINTF):
	$(MAKE) -C $(PRINTF_DIR)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(PRINTF_DIR) clean
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(PRINTF_DIR) fclean
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re

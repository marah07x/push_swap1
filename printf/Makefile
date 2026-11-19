NAME		= libftprintf.a

CC			= cc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar rcs
RM			= rm -f

SRCS		= ft_printf.c ft_putchar.c ft_putnbr_base.c ft_putstr.c \
			  ft_putnbr_dec.c ft_putptr.c ft_putundef.c

OBJS		= $(SRCS:.c=.o)
LIBFt		= libft42/libft.a

all: $(NAME)

$(NAME): $(OBJS) $(LIBFt)
	cp $(LIBFt) $(NAME)
	$(AR) $(NAME) $(OBJS)

$(LIBFt):
	make -C libft42

clean:
	$(RM) $(OBJS)
	make -C libft42 clean

fclean: clean
	$(RM) $(NAME)
	make -C libft42 fclean

re: fclean all

.PHONY: all clean fclean re

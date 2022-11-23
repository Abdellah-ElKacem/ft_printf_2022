NAME = libftprintf.a

HEADER = libftprintf.h

SRCS =  ft_count_nbr_bs16.c ft_printf.c ft_putchar.c \
		ft_putnbr_bs16large.c ft_putnbr_bs16small.c ft_putnbr.c \
		ft_putnbru.c ft_putstr.c ft_strlen.c

OBJS = $(SRCS:.c=.o)

CC = cc

CC_FLAGS = -Wall -Wextra -Werror

all :  $(NAME)

$(NAME) : $(OBJS)
		ar -rc $(NAME) $(OBJS)

%.o : %.c $(HEADER)
		$(CC) $(CC_FLAGS) -c $<

clean :
		rm -f $(OBJS)

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY = all clean fclean re
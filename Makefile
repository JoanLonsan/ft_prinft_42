LIBFT		= ./libft/libft.a
N_TEMP		= temp.a
NAME		= libftprintf.a
CC			= gcc
CFLAGS		= -c -Wall -Wextra -Werror
INCLUDES	= -I./includes
RM			= rm -rf
AR			= ar -rcs
SRCS		=  ft_printf.c 

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) bonus -C ./libft
	cp libft/libft.a $(NAME)
	$(CC) $(CFLAGS) $(INCLUDES) $(SRCS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(MAKE) clean -C ./libft
	$(RM) $(SURPL_O) 
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
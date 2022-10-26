LIBFT		= ./libft/libft.a
N_TEMP		= temp.a
NAME		= libftprintf.a
CC			= gcc
CFLAGS		= -c -Wall -Wextra -Werror
INCLUDES	= -I ./includes
RM			= rm -rf
AR			= ar rcs
SRCS		= ft_printf.c \
			./srcs/ft_sp_c.c \
			./srcs/ft_sp_id.c \
			./srcs/ft_sp_p.c \
			./srcs/ft_sp_s.c \
			./srcs/ft_sp_u.c \
			./srcs/ft_sp_x.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT)
	@cp libft/libft.a $(NAME)
	@$(CC) $(CFLAGS) $(INCLUDES) $(SRCS)
	@$(AR) $(NAME) $(OBJS)

clean:
	@$(RM) $(OBJS)
	@make clean -C ./libft

fclean: clean
	@$(RM) $(NAME)
	@$(RM) $(LIBFT)/libft.a

re: fclean all

.PHONY: all clean fclean re
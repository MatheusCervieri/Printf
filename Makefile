SRC_PRNT =	ft_printf.c \
			write_input.c \
			utils.c \
			write_string.c \
			write_integer.c \
			write_unsigned_integer.c \
			write_hex.c \
			itoa_base.c \
			write_hex_upper.c \
			write_pointer.c 

H_SRC	=	ft_printf.h

OBJS	=	${SRC_PRNT:.c=.o}

NAME	=	libftprintf.a

FLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

.c.o:
			cc ${FLAGS} -c $< -o ${<:.c=.o} 

$(NAME):	${OBJS} ${H_SRC}
			ar -rcs $@ $^

all: 		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
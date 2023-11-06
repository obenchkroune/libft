NAME			=	libft.a

CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror -I.
AR				=	ar rc
RM				=	rm -r

SRC				=	$(wildcard ./*.c)
OBJ				=	$(SRC:.c=.o)

BONUS			=	$(wildcard *_bonus.h)
BONUS_OBJ		=	$(BONUS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

bonus: $(BONUS_OBJ)
	$(AR) $(NAME) $(BONUS_OBJ)

clean:
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
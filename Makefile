NAME				=	libft.a

CC					=	gcc
CFLAGS				=	-Wall -Wextra -Werror -I.

SRC					=	$(wildcard *.c)
OBJ					=	$(SRC:.c=.o)

AR					=	ar rcs
RM					=	rm -rf

BONUS_SRC			=	$(wildcard *_bonus.c)
BONUS_OBJ			=	$(BONUS_SRC:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(BONUS_OBJ)
	$(AR) $(NAME) $(BONUS_OBJ)
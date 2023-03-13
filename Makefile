CC = cc
CFLAGS = -Wall -Wextra -Werror
RMF = rm -f
SRC = do_op.c op_ft.c
OBJT = $(SRC: .c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJT)
	$(CC) $(CFLAGS) $^ -o $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $<

clean:
	$(RMF) $(OBJT)

fclean: clean
	$(RMF) $(NAME)

re: fclean
	make
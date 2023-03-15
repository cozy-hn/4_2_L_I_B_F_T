CC = cc
CFLAGS = -Wall -Wextra -Werror
RMF = rm -f
SRC = ft_atoi.c ft_bzero.c ft_isalnum.c \
ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c \
ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
ft_strrchr.c ft_tolower.c ft_toupper.c ft_calloc.c ft_strdup.c\
ft_substr.c
OBJT = $(SRC:.c=.o)
NAME = libft.a
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJT)
	$(AR) $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -c $<

clean:
	$(RMF) $(OBJT)

fclean: clean
	$(RMF) $(NAME)

re: fclean
	make

.PHONY : all clean fclean re
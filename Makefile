NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Werror -Wextra

SRC = ft_printf.c \
      ft_char_string.c \
      ft_base10.c \
      ft_unsigned_base10.c \
      ft_hexa_ptr.c

OBJ = $(SRC:.c=.o)
all : $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: 
	rm -f $(NAME)
	rm -f $(OBJ)
	
re: fclean all


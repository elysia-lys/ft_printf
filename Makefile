NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Werror -Wextra

LIBFT = libft/libft.a

SRC = ft_printf.c \
      ft_char_string.c \
      ft_base10.c \
      ft_unsigned_base10.c \
      ft_hexa.c \
      ft_ptr.c

OBJ = $(SRC:.c=.o)
all : $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJ)

$(LIBFT):
	$(MAKE) -C libft

%.o: %.c
	$(CC) $(CFLAGS) -Ilibft -c $< -o $@

clean:
	rm -f $(OBJ)
	$(MAKE) -C libft clean

fclean: 
	rm -f $(NAME)
	rm -f $(OBJ)
	$(MAKE) -C libft fclean
	
re: fclean all


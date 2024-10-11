NAME = ft_display_file

SRC = ft_display_file.c

all : $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	gcc -o $(NAME) ft_display_file.o

clean:
	/bin/rm -f ft_display_file.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
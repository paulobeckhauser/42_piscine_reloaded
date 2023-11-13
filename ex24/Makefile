name = libft.a

includes = -I includes

SRC = srcs/ft_putchar.c\
	srcs/ft_putstr.c\
	srcs/ft_strcmp.c\
	srcs/ft_strlen.c\
	srcs/ft_swap.c

CC = cc

makeobj = $(SRC:.c=.o)

all: $(name)

$(name): $(makeobj)
	ar rc $(name) $(makeobj)

main: main.c $(name)
	$(CC) $(includes) -o $@ $< $(name)
	clear
	./main

clean:
	rm -f srcs/*.o

fclean:	clean
	rm -f *.a
	rm -f main

re: fclean all
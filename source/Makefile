
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = $(wildcard *.c)
#why we used the wildcard
OBJS = $(SRCS:.c=.o)
NAME = libft.a


all: $(NAME)

$(NAME): $(OBJS)
	ar -crs $(NAME) $(OBJS)
#why we start by this part !?
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@ 
#why we use $<:the first dependacy and not $^ and more explination to this part and why we used libft.h


clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

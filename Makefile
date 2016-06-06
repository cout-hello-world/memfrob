NAME = memfrob

$(NAME): $(NAME).c
	$(CC) -std=c90 -pedantic -Wall -Wextra -Werror -O2 $(NAME).c -o $(NAME)

clean:
	$(RM) $(NAME)

install:
	cp $(NAME) /usr/local/games/

CC = gcc
SRC = school.c main.c
OBJ = $(SRC:.c=.o)
NAME = school

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.c m.h
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ) $(NAME)


RE: clean $(NAME)

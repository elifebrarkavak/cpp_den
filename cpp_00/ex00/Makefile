SRCS = megaphone.cpp

NAME = megaphone

CPP = c++

CPP_FLAGS = -Wall -Werror -Wextra --std=c++98

OBJ := $(SRCS:.c=.o)

all: ${NAME}

$(NAME): $(SRCS)
	$(CPP) $(CPP_FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

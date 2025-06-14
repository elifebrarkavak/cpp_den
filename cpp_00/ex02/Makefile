SRCS = Account.cpp tests.cpp

NAME = account

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

SRCS = PhoneBook.cpp Contact.cpp main.cpp

NAME = phonebook

CPP = c++

CPP_FLAGS = -Wall -Werror -Wextra --std=c++98

all: ${NAME}

$(NAME): $(SRCS)
	$(CPP) $(CPP_FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	
re: fclean all

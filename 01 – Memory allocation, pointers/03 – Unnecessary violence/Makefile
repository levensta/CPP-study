NAME = violence

CLANG = clang++ -Wall -Werror

SRC =	main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CLANG) -c $< -o $@

$(NAME): $(OBJ)
	$(CLANG) $^ -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re clean fclean all
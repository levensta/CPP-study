NAME = a.out

CLANG = clang++ -Wall -Werror

SRC =	main.cpp \
		Bureaucrat.cpp \
		Form.cpp \
		ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp \
		PresidentialPardonForm.cpp \
		Intern.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CLANG) -c $< -o $@

$(NAME): $(OBJ)
	$(CLANG) $^ -o $@

clean:
	rm -f $(OBJ)
	rm -f Home_shrubbery

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re clean fclean all
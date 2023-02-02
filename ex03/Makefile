NAME = bureaucrat

COMP = c++
C_FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp Intern.cpp
OBJS = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(COMP) $(C_FLAGS) $^ -o $(NAME)
	@echo "compiled:)"

%.o: %.cpp
	@$(COMP) -c $(CFLAGS) -o $@ $<

clean:
	@$(RM) *.o

fclean: clean
	@$(RM) $(NAME)
	@echo "deleted:("

re: fclean all

.PHONY: all clean fclean re
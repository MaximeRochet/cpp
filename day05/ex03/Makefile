NAME = bureau 

CLANG		= c++
#CPPFLAGS =	-Wall -Wextra -Werror -std=c++98

SRC = PresidentialPardonForm.cpp RobotomyRequestForm.cpp \
	  ShrubberyCreationForm.cpp bureaucrat.cpp \
	  intern.cpp form.cpp main.cpp

HEADER = PresidentialPardonForm.hpp RobotomyRequestForm.hpp \
		 ShrubberyCreationForm.hpp bureaucrat.hpp \
		 intern.hpp form.hpp

OBJ_PATH = .obj
OBJ_NAME = $(SRC:.cpp=.o)
OBJ = $(addprefix $(OBJ_PATH)/, $(OBJ_NAME))

$(OBJ_PATH)/%.o: %.cpp
	@mkdir -p $(OBJ_PATH)
	@$(CLANG)  $(CPPFLAGS) -c $< -o $@ #-fanitize=address

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CLANG) $(CPPFLAGS) $(OBJ) -o $(NAME)

run: $(NAME)
	@./$(NAME)

clean:
	@rm -rf $(OBJ_PATH)
	@rm -f $(OBJ_NAME)

fclean: clean
	@rm  $(NAME)

re: fclean all

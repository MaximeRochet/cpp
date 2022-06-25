NAME = Animal

CLANG		= c++
CPPFLAGS =	-Wall -Wextra -Werror -std=c++98

SRC = main.cpp aanimal.cpp cat.cpp dog.cpp brain.cpp
HEADER = aanimal.hpp cat.hpp dog.hpp brain.hpp
OBJ_PATH = .obj
OBJ_NAME = $(SRC:.cpp=.o)
OBJ = $(addprefix $(OBJ_PATH)/, $(OBJ_NAME))

$(OBJ_PATH)/%.o: %.cpp
	@mkdir -p $(OBJ_PATH)
	@$(CLANG)  $(CPPFLAGS) -c $< -o $@

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

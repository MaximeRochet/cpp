NAME		= megaphone

SRC			= megaphone.cpp
OBJ			= megaphone.o

CLANG		= clang++
CPPFLAGS	= -Wall -Wextra -Werror -pedantic -std=c++98

all: $(NAME)

%.o:%.c
	@$(CLANG) $(CPPFLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	@$(CLANG) -o $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re:
	@$(MAKE) fclean --no-print-directory
	@$(MAKE) all --no-print-directory

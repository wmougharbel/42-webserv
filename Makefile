NAME = webserv

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -g -std=c++98

RM = rm -rf

SRC_DIR = sources/

SOURCES = $(addprefix $(SRC_DIR), main.cpp)

OBJECTS = $(addsuffix .o, $(basename $(SOURCES)))

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CPP) $(CPPFLAGS) $(OBJECTS) -o $(NAME)
	@sleep 1
	@clear
	@echo "\n==========Compiled Successfully==========\n"

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -I. -c $< -o $@

clean:
	@$(RM) $(OBJECTS)

fclean: clean
	@$(RM) $(NAME)
	@echo "\n==========Cleaned Successfully==========\n"

re: fclean all
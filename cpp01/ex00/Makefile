NAME			= megaphone

SOURCE			= megaphone.cpp

OBJECT			=	$(SOURCE:.cpp=.o)

COMPILE			= 	clang++

FLAGS			= 	-Wall -Wextra -Werror -std=c++98

all: $(NAME)

%.o: %.cpp
	@$(COMPILE) $(FLAGS) -c $< -o $@

$(NAME): $(OBJECT)
	@$(COMPILE) $(FLAGS) $(OBJECT) -o $(NAME)

clean:
	@/bin/rm -f $(OBJECT)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
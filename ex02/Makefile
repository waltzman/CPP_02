CPP = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98
TARGET = fixed
SRCS = 	main.cpp\
		Fixed.cpp\

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	@$(CPP) $(CPP_FLAGS) $(OBJS) -o $(TARGET)

%.o: %.cpp
	@$(CPP) $(CPP_FLAGS) -c $< -o $@
clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(TARGET)

re: fclean all

checkleaks: all
	valgrind --leak-check=yes ./$(TARGET)

.PHONY: all show clean fclean re

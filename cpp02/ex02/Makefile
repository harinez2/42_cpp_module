NAME		= fixedpoint
SRCS		= \
			main.cpp \
			Fixed.cpp
OBJS		= $(SRCS:.cpp=.o)
DEPENDS		= $(OBJS:.o=.d)
CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic-errors -MMD -MP
-include $(DEPENDS)

.PHONY: all
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

.PHONY: clean
clean:
	rm -f $(OBJS) $(DEPENDS)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all

.PHONY: debug
debug: CXXFLAGS += -g -fsanitize=integer -fsanitize=address -fsanitize=leak
debug: re

.PHONY: test
test:
	$(CXX) test.cpp Fixed.cpp $(CXXFLAGS) -o $(NAME)

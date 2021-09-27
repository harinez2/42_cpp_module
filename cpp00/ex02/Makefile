NAME		= account
SRCS		= tests.cpp Account.cpp
OBJS		= $(SRCS:.cpp=.o)
CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror
DBGFLG		= -g3 -fsanitize=address

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) $(CXXFLAGS) -o $(NAME)

.cpp.o: $(SRCS)
	$(CXX) $(CXXFLAGS) -c $< -o $(<:.cpp=.o)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

NAME		= megaphone
SRCS		= megaphone.cpp
OBJS		= $(SRCS:.cpp=.o)
CXX			= clang++
CFLAGS		= -Wall -Wextra -Werror
DBGFLG		= -g3 -fsanitize=address

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) $(CFLAGS) -o $(NAME)

.cpp.o: $(SRCS)
	$(CXX) $(CFLAGS) -c $< -o $(<:.cpp=.o)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albbermu <albbermu@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/25 09:51:40 by albbermu          #+#    #+#              #
#    Updated: 2025/08/25 09:51:40 by albbermu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animals_with_Brains_and_Abstract_class
SRC_DIR = src/
INC_DIR = includes/
SRCS = $(SRC_DIR)main.cpp \
			$(SRC_DIR)Animal.cpp \
			$(SRC_DIR)Dog.cpp \
			$(SRC_DIR)Cat.cpp \
			$(SRC_DIR)Brain.cpp
OBJS = $(SRCS:.cpp=.o)
CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -I $(INC_DIR) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

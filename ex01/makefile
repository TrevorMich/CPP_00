# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/29 08:35:47 by ioduwole          #+#    #+#              #
#    Updated: 2023/08/29 09:29:30 by ioduwole         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	phonebook

SRC_DIR	=	src
SRCS	=	Contact.cpp PhoneBook.cpp main.cpp

SRC		=	$(addprefix $(SRC_DIR)/, $(SRCS))
OBJ		=	$(patsubst %.cpp, %.o, $(SRCS))

CC		=	g++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@ $(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo $(GREEN)"Ex01 compiled"

%.o: $(SRC_DIR)/%.cpp
	@ $(CC) -c $(CFLAGS) $< -o $@
	@echo "Object files Created"

clean:
	@$(RM) $(OBJ)
	@echo "Removing object files"

fclean: clean
	@$(RM) $(NAME)
	@echo "Removing both object and executable"

re: fclean all

.PHONY: all clean fclean re
# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jensbouma <jensbouma@student.codam.nl>       +#+                      #
#                                                    +#+                       #
#    Created: 2024/09/24 13:33:57 by jensbouma     #+#    #+#                  #
#    Updated: 2024/09/24 13:39:37 by jensbouma     ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

# Program variables
NAME		= bin/brain
FILES		= Weapon.cpp	\
			  HumanA.cpp	\
			  HumanB.cpp	\
			  main.cpp
INC_DIR		= -I include

# Compilation variables
SRC_DIR		= src
BUILD_DIR	= build
CC			= g++
CFLAGS		= -Wall -Wextra -Werror -std=c++20
SRC			= $(addprefix $(SRC_DIR)/, $(FILES))
OBJECTS		= $(SRC:%.cpp=$(BUILD_DIR)/%.o)

# Rules
all: $(NAME)

$(NAME): $(OBJECTS)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(LIBS) $(INC_DIR) -o $@ $^ && echo $@ "succesful created"

$(BUILD_DIR)/%.o:%.cpp
	@mkdir -p $(dir $@)
	@printf "%-25.25s%s\n" "Build" "$(notdir $<)"
	@$(CC) $(CFLAGS) $(INC_DIR) -c $< -o $@ 

debug: CFLAGS += -g
debug: re

clean:
	@rm -rf $(BUILD_DIR)

fclean: clean
	@rm -rf $(dir $(NAME))

re: fclean all

.PHONY: all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/24 10:48:06 by EktinOpUrims      #+#    #+#              #
#    Updated: 2025/02/28 16:21:59 by EktinOpUrims     ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \

HEADER = utils.tpp.cpp \
	utils.tpp.hpp \

OBJDIR = .objects/

OBJECTS = $(SRC:%.cpp=$(addprefix $(OBJDIR), %.o))

NAME = template

CPP = g++

CPPFLAGS = -Wall -Wextra -Wpedantic -Werror

CPPFLAGS +=-std=c++98


all: $(NAME)

$(NAME): $(OBJECTS) $(HEADER)
	$(CPP) $(OBJECTS) -o $(NAME) $(CPPFLAGS)

$(OBJDIR)%.o:	%.cpp $(HEADER)
	@mkdir -p $(OBJDIR)
	$(CPP) -o $@ -c $< $(CPPFLAGS)
 
clean:
	@rm -rf $(OBJDIR)
	@rm -rf $(wildcard *.o)

fclean:	clean
	@rm -f $(NAME) $(wildcard *.out) $(wildcard *.a)
	@rm -rf $(wildcard .*.swp) $(wildcard .*.swx) $(wildcard .*.swo)

re:	fclean
	@make --no-print-directory 

.PHONY:
	clean fclean re

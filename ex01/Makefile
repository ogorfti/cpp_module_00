# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/24 15:27:23 by ogorfti           #+#    #+#              #
#    Updated: 2023/09/25 16:53:16 by ogorfti          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS = PhoneBook.cpp Contact.cpp

OBJS = $(SRCS:.cpp=.o)

CXXFLAGS =  -Wall -Wextra -Werror -std=c++98

CH = Contact.hpp

PH = PhoneBook.hpp

CC = c++

RM = rm -f

%.o : %.cpp $(CH) $(PH)
	$(CC) $(CXXFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
##
## Makefile for makefile in /home/bergea_k/autre/cpp
## 
## Made by Kevin Bergeal
## Login   <bergea_k@epitech.net>
## 
## Started on  Mon Jun 13 15:19:43 2016 Kevin Bergeal
## Last update Thu Jun 16 14:51:54 2016 Kevin Bergeal
##

CC	= g++

NAME	= a.out

RM	= rm -f

SRCS	= main.cpp \
	  vehicule.cpp

OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

##
## Makefile for makefile in /home/bergea_k/autre/cpp
## 
## Made by Kevin Bergeal
## Login   <bergea_k@epitech.net>
## 
## Started on  Mon Jun 13 15:19:43 2016 Kevin Bergeal
## Last update Wed Jun 15 16:40:33 2016 Kevin Bergeal
##

CC	= g++

NAME	= a.out

RM	= rm -f

SRCS	= main.cpp \
	  zfraction.cpp

OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

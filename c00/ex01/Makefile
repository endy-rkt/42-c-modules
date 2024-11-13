SRCS = Contact.cpp PhoneBook.cpp utils.cpp main.cpp error.cpp

OBJS = ${SRCS:.cpp=.o}

CC = c++

CFLAGS = -Wall -Wextra -Werror

OPT_FLAGS = -std=c++98 -g

RM = rm -f

NAME = my_phone

${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${SRCS} -o ${NAME}

all:	${NAME}

clean:	
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.phony:	fclean all clean re
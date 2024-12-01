NAME = account 
SRC = ./Account.cpp ./tests.cpp
OBJ = ${SRC:.cpp=.o}
CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

%.o : %.cpp
	c++ -c ${CFLAGS} $< -o $@

${NAME}:	${OBJ}
			${CC} ${CFLAGS} ${OBJ} -o ${NAME}

all:		${NAME}

clean:
			rm -f ${OBJ}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.phony:		fclean all clean re

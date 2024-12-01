SRCS = Account.cpp tests.cpp

OBJS = ${SRCS:.cpp=.o}

CC = c++

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

NAME = account

%.o: %.cpp
	${CC}  -c $< -o $@

${NAME}:	${OBJS}
			${CC}  ${SRCS} -o ${NAME}

all:	${NAME}

clean:	
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.phony:	fclean all clean re
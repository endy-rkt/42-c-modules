SRCS = megaphone.cpp

OBJS = ${SRCS:.cpp=.o}

CC = c++

OPT_FLAGS = -std=c++98 -g

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

NAME = megaphone

%.o: %.cpp
	${CC} ${CFLAGS} ${OPT_FLAG} -c $< -o $@

${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${SRCS} -o ${NAME}

all:	${NAME}

clean:	
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.phony:	fclean all clean re
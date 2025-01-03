SRCS = Zombie.cpp main.cpp zombieHorde.cpp

OBJS = ${SRCS:.cpp=.o}

CC = c++

CFLAGS = -Wall -Wextra -Werror

OPT_FLAG = -std=c++98 -g

RM = rm -f

NAME = zombieHorde

%.o: %.cpp
	${CC} ${CFLAGS} ${OPT_FLAG} -c $< -o $@

${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${OPT_FLAG} ${SRCS} -o ${NAME}

all:	${NAME}

clean:	
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.phony:	fclean all clean re
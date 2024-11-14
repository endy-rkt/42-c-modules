SRCS = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJS = ${SRCS:.cpp=.o}

CC = c++

CFLAGS = -Wall -Wextra -Werror

OPT_FLAG = -std=c++98 -g

RM = rm -f

NAME = fight

${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${SRCS} -o ${NAME}

all:	${NAME}

clean:	
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.phony:	fclean all clean re
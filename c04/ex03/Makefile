SRCS = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

OBJS = ${SRCS:.cpp=.o}

CC = c++

CFLAGS = -Wall -Wextra -Werror

OPT_FLAG = -std=c++98 -g

RM = rm -f

NAME = materia

%.o: %.cpp
	${CC} ${CFLAGS} ${OPT_FLAG} -c $< -o $@

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OPT_FLAG} ${OBJS} -o ${NAME}

all: ${NAME}

clean:	
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: fclean all clean re

NAME 		:= libftprintf.a
SOURCES 	:= ft_printf.c
			

SOURCES_BONUS := ft_printf_bonus.c


OBJECTS 		:= ${SOURCES:.c=.o}
OBJECTS_BONUS	:= ${SOURCES_BONUS:.c=.o}
CC 				:= cc
RM				:= rm -f
CFLAGS			:= -Wall -Wextra -Werror
AR				:= ar -rcs

all: ${NAME}

$(NAME): 	${OBJECTS}

bonus: 		${OBJECTS_BONUS}

%.o:%.c
			${CC} ${CFLAGS} -c $< -o $@
			${AR} ${NAME} $@

clean: 
			${RM} ${OBJECTS} ${OBJECTS_BONUS}

fclean: clean 
			${RM} ${NAME}

re: fclean all

.PHONY: re fclean clean all bonus
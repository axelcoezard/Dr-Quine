# -----------------------------------------------------------------------------
# PROJECT
# -----------------------------------------------------------------------------
NAME	:=	Colleen
VERSION	:=	1.0
ARCH	:=	x64

# -----------------------------------------------------------------------------
# COMPILATION
# -----------------------------------------------------------------------------
SRCS	:=	Colleen.c
OBJS	:=	$(addprefix bin/, $(SRCS:.c=.o))

CC		:=	clang
CFLAGS	:=

# -----------------------------------------------------------------------------
# COLORS
# -----------------------------------------------------------------------------
__RED		:=	"\033[1;31m"
__GREEN		:=	"\033[1;32m"
__YELLOW	:=	"\033[1;33m"
__BLUE		:=	"\033[1;36m"
__WHITE		:=	"\033[1;37m"
__EOC		:=	"\033[0;0m"

# -----------------------------------------------------------------------------
# RULES
# -----------------------------------------------------------------------------
bin/%.o: srcs/%.c
	@mkdir -p ${dir $@}
	@${CC} ${CFLAGS} -o $@ -c $^ -I includes
	@echo ${__GREEN}"Compiling "${__WHITE}$^${__EOC}

all: ${NAME}

${NAME}: ${OBJS}
	@${CC} ${CFLAGS} ${OBJS} -o ${NAME}
	@echo ${__GREEN}"Finished "${__WHITE}${NAME}" v"${VERSION}" bin target"${__EOC}

clean:
	@rm -rf bin/

fclean: clean
	@rm -rf ${NAME}
	@echo ${__BLUE}"Cleaned "${__WHITE}"bin target(s)"${__EOC}

re: fclean all

.PHONY: all fclean re
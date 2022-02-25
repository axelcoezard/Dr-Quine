# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acoezard <acoezard@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/24 23:40:42 by acoezard          #+#    #+#              #
#    Updated: 2022/02/25 13:30:14 by acoezard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COLLEEN_NAME	:=	Colleen
GRACE_NAME		:=	Grace
SULLY_NAME		:=	Sully

# -----------------------------------------------------------------------------
# COMPILATION
# -----------------------------------------------------------------------------
COLLEEN_SRCS	:=	Colleen.c
COLLEEN_OBJS	:=	$(addprefix bin/, $(COLLEEN_SRCS:.c=.o))

GRACE_SRCS		:=	Grace.c
GRACE_OBJS		:=	$(addprefix bin/, $(GRACE_SRCS:.c=.o))

SULLY_SRCS		:=	Sully.c
SULLY_OBJS		:=	$(addprefix bin/, $(SULLY_SRCS:.c=.o))

CC				:=	clang

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
bin/%.o: %.c
	@mkdir -p ${dir $@}
	@${CC} ${CFLAGS} -o $@ -c $^ -I includes
	@echo ${__GREEN}"Compiling "${__WHITE}$^${__EOC}

all: ${COLLEEN_NAME} ${GRACE_NAME} ${SULLY_NAME}

${COLLEEN_NAME}: ${COLLEEN_OBJS}
	@${CC} ${CFLAGS} ${COLLEEN_OBJS} -o ${COLLEEN_NAME}
	@echo ${__GREEN}"Finished "${__WHITE}${COLLEEN_NAME}" bin target"${__EOC}

${GRACE_NAME}: ${GRACE_OBJS}
	@${CC} ${CFLAGS} ${GRACE_OBJS} -o ${GRACE_NAME}
	@echo ${__GREEN}"Finished "${__WHITE}${GRACE_NAME}" bin target"${__EOC}

${SULLY_NAME}: ${SULLY_OBJS}
	@${CC} ${CFLAGS} ${SULLY_OBJS} -o ${SULLY_NAME}
	@echo ${__GREEN}"Finished "${__WHITE}${SULLY_NAME}" bin target"${__EOC}

clean:
	@rm -rf bin/

fclean: clean
	@rm -rf ${COLLEEN_NAME} ${GRACE_NAME} ${SULLY_NAME}
	@echo ${__BLUE}"Cleaned "${__WHITE}"bin target(s)"${__EOC}

re: fclean all

.PHONY: all fclean re

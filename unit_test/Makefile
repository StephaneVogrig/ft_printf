#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stephane <stephane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 02:59:52 by svogrig           #+#    #+#              #
#    Updated: 2024/01/09 03:49:14 by stephane         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = unit_test

#------------------------------------------------------------------------------#
# variables                                                                    #
#------------------------------------------------------------------------------#

SRC_DIR		:=	.
SRCS 		:=	unit_test.c \
				nbr_digit_ui.c \
				nbr_digit_ui8_tests.c \
				nbr_digit_ui16_tests.c \
				nbr_digit_ui32_tests.c \
				nbr_digit_ui64_tests.c

SRCS		:=	$(SRCS:%=$(SRC_DIR)/%)

BUILD_DIR	:= 	.build
OBJS 		:=	$(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)

DEPS		:=	$(OBJS:.o=.d)

CC			:=	cc
CFLAGS		:= 	-Wall -Wextra -Werror -g
CPPFLAGS	:=	-MMD -MP
AR			:=	ar
ARFLAGS		:=	-r -c -s

RM			:=	rm -f
MAKEFLAGS	+=	--no-print-directory
DIR_DUP		=	mkdir -p $(@D)

#------------------------------------------------------------------------------#
# rules                                                                        #
#------------------------------------------------------------------------------#

all : $(NAME)

$(NAME) : $(OBJS)
	$(cc) $(OBJS) -o $(NAME)
	$(info created: $@)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(DIR_DUP)
	$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $<
	$(info created: $@)

-include $(DEPS)

bonus: $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	$(info created: $@)

clean:
	$(RM) $(OBJS) $(DEPS)
	
fclean: clean
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: clean fclean re so bonus
.SILENT:

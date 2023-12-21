# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 02:59:52 by svogrig           #+#    #+#              #
#    Updated: 2023/12/21 12:52:46 by svogrig          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

#------------------------------------------------------------------------------#
# variables                                                                    #
#------------------------------------------------------------------------------#

SRC_DIR		:=	.
SRCS 		:=	ft_printf.c \
				buffer.c \
				parsing.c \
				specification_set.c \
				arg_to_ll.c \
				ull_to_str.c \
				format_i.c \
				format_c.c \
				format_p.c \
				format_s.c \
				format_ll.c \
				ft_utils.c

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
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
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

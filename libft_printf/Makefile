# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 02:59:52 by svogrig           #+#    #+#              #
#    Updated: 2024/01/14 03:58:23 by svogrig          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

#------------------------------------------------------------------------------#
# variables                                                                    #
#------------------------------------------------------------------------------#

INCS		:=	include
SRC_DIR		:=	src
SRCS 		:=	ft_printf.c \
				buffer.c \
				format_c.c \
				format_f.c \
				format_i.c \
				format_p.c \
				format_purcent.c \
				format_s.c \
				format_u.c \
				format_x.c \
				format_xupper.c \
				field.c \
				float64_get.c \
				nbr_digit.c \
				nbrstr_to_buffer.c \
				parsing.c \
				set_specification.c \
				spec_str_to_int.c \
				ui64_to_str.c \
				vs_10pow.c

SRCS		:=	$(SRCS:%=$(SRC_DIR)/%)

BUILD_DIR	:= 	.build
OBJS 		:=	$(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)

DEPS		:=	$(OBJS:.o=.d)

CC			:=	cc
CFLAGS		:= 	-Wall -Wextra -Werror
CPPFLAGS	:=	$(addprefix -I, $(INCS)) -MMD -MP
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

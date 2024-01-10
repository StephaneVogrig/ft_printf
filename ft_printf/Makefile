#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stephane <stephane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 02:59:52 by svogrig           #+#    #+#              #
#    Updated: 2024/01/10 22:50:55 by stephane         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libftprintf.a

#------------------------------------------------------------------------------#
# variables                                                                    #
#------------------------------------------------------------------------------#

SRC_DIR		:=	.
SRCS 		:=	ft_printf.c \
				buffer.c \
				format_u.c \
				format_pc.c \
				format_i.c \
				format_c.c \
				format_p.c \
				format_s.c \
				format_x.c \
				format_xupper.c \
				format_f.c \
				field.c \
				nbrstr_to_buffer.c \
				parsing.c \
				set_specification.c \
				ui64_to_str.c \
				float64_set.c \
				float64_get.c \
				float_print.c \
				vs_math.c

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

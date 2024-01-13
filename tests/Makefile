# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/13 12:30:17 by svogrig           #+#    #+#              #
#    Updated: 2024/01/13 15:21:56 by svogrig          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#------------------------------------------------------------------------------#
# variables libraries                                                          #
#------------------------------------------------------------------------------#

LIBS		:=	ftprintf
LIBFT_DIR	:=	../libft_printf
LIBS_TARGET	:=	$(LIBFT_DIR)/libftprintf.a

LDFLAGS		:=	$(addprefix -L,$(dir $(LIBS_TARGET)))
LDLIBS		:=	$(addprefix -l,$(LIBS))

#------------------------------------------------------------------------------#
# variables                                                                    #
#------------------------------------------------------------------------------#

NAME        :=  libft_tests

INCS		:=	include \
				$(LIBFT_DIR)/include

SRC_DIR		:=	src
SRC_TESTER	:=	main.c \
				tests_char.c \
				tests_d.c \
				tests_f.c \
				tests_field_width_etoile.c \
				tests_field_width.c \
				tests_flags.c \
				tests_hi.c \
				tests_i.c \
				tests_il.c \
				tests_ill.c \
				tests_precision.c \
				tests_precision_etoile.c \
				tests_ptr.c \
				tests_purcent.c \
				tests_spec_without_conversion.c \
				tests_str.c \
				tests_u.c \
				tests_ul.c \
				tests_ull.c \
				tests_warning.c \
				tests_warning_cc.c \
				tests_warning_clang.c \
				tests_x.c \
				tests_xupper.c
				
SRCS		:= 	$(SRC_TESTER)
SRCS		:=	$(SRCS:%=$(SRC_DIR)/%)

BUILD_DIR	:=	.build
OBJS		:=	$(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)

DEPS		:=	$(OBJS:.o=.d)

CC			:=	cc

CFLAGS		:=	-Wall -Wextra -Werror
CPPFLAGS	:=	$(addprefix -I,$(INCS)) -MMD -MP

RM          :=	rm -f
MAKEFLAGS   +=	--no-print-directory
DIR_DUP		=	mkdir -p $(@D)

#------------------------------------------------------------------------------#
# rules                                                                        #
#------------------------------------------------------------------------------#

all: $(NAME)

$(NAME): $(OBJS) $(LIBS_TARGET)
	$(CC) $(LDFLAGS) -o $(NAME) $(OBJS) $(LDLIBS)
	$(info created: $(NAME))

$(LIBS_TARGET):
	$(MAKE) -C $(@D)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(DIR_DUP)
	$(CC) $(CFLAGS) $(CPPFLAGS) -g -c -o $@ $< 
	$(info created: $@)

-include $(DEPS)

clean:
	$(MAKE) -C $(dir $(LIBS_TARGET)) clean
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) -C $(dir $(LIBS_TARGET)) fclean
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

run: all
	-./$(NAME)

#------------------------------------------------------------------------------#
# specifications                                                               #
#------------------------------------------------------------------------------#

.PHONY: clean fclean re run
.SILENT:

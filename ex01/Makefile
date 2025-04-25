.PHONY: all clean fclean re f fclear c clear

NAME				=		cpp
CC					=		c++
CFLAGS				=		-Wall -Wextra -Werror -std=c++98
CFLAGSS				=		-Weverything						 -Wno-padded -Wno-documentation-unknown-command -Wno-documentation -std=c++98
NPD					=		--no-print-directory
MAKE				:=		$(MAKE) -j $(NPD)
RM					=		rm -fr
AR					=		ar -rcs
INC_FLAGS			=		-I $(D_INC)

#############################################################################################
#																							#
#										// Directories										#
#																							#
#############################################################################################


# Directories
D_SRC				=		src/
D_OBJ				=		1object/
D_INC				=		inc/

# Source Directories

#############################################################################################
#																							#
#										// SOURCE											#
#																							#
#############################################################################################


INC					=		Zombie.hpp


SRC					=		Zombie.cpp			\
							zombieHorde.cpp		\
							main.cpp



#############################################################################################
#																							#
#										// OBJECT											#
#																							#
#############################################################################################


# All src in his Src Directories
SRCS				=		$(addprefix $(D_SRC), $(SRC))


# Changing all source directories to object directories
OBJS				=		$(subst $(D_SRC), $(D_OBJ), $(SRCS:.cpp=.o))
DEPS				=		$(SRCS:%.cpp=%.d)

INCS				=		$(addprefix $(D_INC), $(INC))

#############################################################################################
#																							#
#										// COMPILATION										#
#																							#
#############################################################################################


all					:
			$(MAKE) $(NAME)

$(NAME)				:	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(D_OBJ)%.o			:	$(D_SRC)%.cpp $(INCS) Makefile
			@mkdir -p $(dir $@)
			$(CC) $(CFLAGS) -c $< -o $@ $(INC_FLAGS)


#############################################################################################
#																							#
#									// CLEAN  FCLEAN  RE									#
#																							#
#############################################################################################


clean 				:
			$(RM) $(D_OBJ)


fclean 				:
			$(RM) $(NAME)
			$(RM) $(D_OBJ)


re 					:	 fclean all


#############################################################################################
#																							#
#										Allias												#
#																							#
#############################################################################################


c				:	clear
clear			:	clean

f				:	fclean
fclear			:	fclean

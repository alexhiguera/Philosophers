# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alex <alex@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/04 02:14:21 by alex              #+#    #+#              #
#    Updated: 2024/04/04 02:44:23 by alex             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#████████████████████████████ Configuration ███████████████████████████████████#

NAME			:= philo
CC				:= gcc
CFLAGS			:= -Wall -Wextra -Werror -ILibft_2.0/
LIBFT			:= Libft_2.0/

#██████████████████████████████ Colors ████████████████████████████████████████#

DEF_COLOR 		=	\033[0;39m
GRAY 			=	\033[0;90m
RED 			=	\033[0;91m
GREEN 			=	\033[0;92m
YELLOW 			=	\033[0;93m
BLUE 			=	\033[0;94m
MAGENTA 		=	\033[0;95m
CYAN 			=	\033[0;96m
WHITE 			=	\033[0;97m

#█████████████████████████████ SOURCES █████████████████████████████████████████#

SRC 			:= 	

#████████████████████████████ Rules ████████████████████████████████████████████#

all:$(NAME)

$(NAME): 	$(SRC)
				@echo "$(CYAN)Compiling $(NAME)\n"
				@make -C $(LIBFT)
				@$(CC) $(CFLAGS) $(LIBFT)libft.a $(SRC) -o $(NAME)
				@echo "$(GREEN)Philosophers Compiled! 🚀$(WHITE)\n"

clean:
				@rm -rf $(OBJ)
				@make -C $(LIBFT) clean

fclean: 	clean
				@make -C $(LIBFT) fclean
				@rm -rf $(NAME)

re: 		fclean all

.PHONY: 	all clean fclean re $(LIBFT) normi run

#█████████████████████████████ Custom rules ████████████████████████████████████#

normi:
						@echo "$(YELLOW)Norminette...\n$(WHITE)"
						@norminette $(SRC)
						@echo "$(GREEN)\nNorminette Done!\n"

run:
						clear					
						@make re
						@./philo
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hecao <hecao@student.42heilbronn.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/20 16:56:21 by hecao             #+#    #+#              #
#    Updated: 2025/05/20 16:57:45 by hecao            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash
cc -Wall -Wextra -Werror -c ft_swap.c ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c
ar rc libft.a ft_swap.o ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o
rm ft_swap.o ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o
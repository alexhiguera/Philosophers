/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: columbux <columbux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 23:27:48 by columbux          #+#    #+#             */
/*   Updated: 2024/04/25 23:39:46 by columbux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ph_error(char *message)
{
	char	*red;
	char	*white;

	red = "\033[0;91m";
	white = "\033[0;97m";
	printf("%sError: %s%s\n", red, message, white);
	exit(EXIT_FAILURE);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: columbux <columbux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 23:27:48 by columbux          #+#    #+#             */
/*   Updated: 2024/04/29 16:47:16 by columbux         ###   ########.fr       */
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

int	ph_atoi(char *str)
{
	int	result;
	int	sign;
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\f'
		|| str[i] == '\n' || str[i] == '\v')
		i++;
	sign = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

/* returns the current time in milliseconds */

long long	timestamp(void)
{
	struct timeval	time;

	gettimeofday(&time, NULL);
	return ((time.tv_sec * 1000) + (time.tv_usec / 1000));
}

void	args_checker(int argc, int n_args)
{
	if (argc != n_args)
	{
		ph_error("5 arguments required\n ./philo \n1.<num_philos> \n2.<time_to_die> \
		\n3.<time_to_eat> \n4.<time_to_sleep> \n5.<num_of_times_each_philos_must_eat>");
		exit(EXIT_FAILURE);
	}
}

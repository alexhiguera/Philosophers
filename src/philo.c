/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: columbux <columbux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:50:18 by columbux          #+#    #+#             */
/*   Updated: 2024/04/25 23:45:41 by columbux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*philosophers(void *data)
{
	//TODO:threads
}

int	main(int argc, char **argv)
{
	if (argc == 6)
	{
	//TODO
	}
	else
		ph_error("5 arguments required\n ./philo <num_philos> <time_to_die> \
		<time_to_eat> <time_to_sleep> <num_of_times_each_philos_must_eat>");
}

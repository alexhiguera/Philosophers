/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: columbux <columbux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:50:18 by ahiguera          #+#    #+#             */
/*   Updated: 2024/04/27 00:56:31 by columbux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

/* void	*philosophers(void *data)
{
	//TODO:threads
} */

int	main(int argc, char **argv)
{
	t_philosophers	args;

	if (argc == 6)
	{
		ph_init_philos(&args, argv);
	}
	else
		ph_error("5 arguments required\n ./philo <num_philos> <time_to_die> \
		<time_to_eat> <time_to_sleep> <num_of_times_each_philos_must_eat>");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inits.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: columbux <columbux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 23:21:47 by ahiguera          #+#    #+#             */
/*   Updated: 2024/04/29 16:47:59 by columbux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ph_init_philos(t_philosophers *args, char **argv)
{
	args->philos_args.num_philos = ph_atoi(argv[1]);
	args->philos_args.time_die = ph_atoi(argv[2]);
	args->philos_args.time_sleep = ph_atoi(argv[3]);
	args->philos_args.time_eat = ph_atoi(argv[4]);
	args->philos_args.num_eats = ph_atoi(argv[5]);
	if (args->philos_args.num_philos < 2 \
		|| args->philos_args.num_philos > 250 \
		|| args->philos_args.time_die < 0 \
		|| args->philos_args.time_sleep < 0 \
		|| args->philos_args.time_eat < 0 \
		|| args->philos_args.num_eats < 0)
		return (EXIT_FAILURE);
	return (0);
}

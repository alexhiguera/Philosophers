/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: columbux <columbux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 01:51:54 by ahiguera          #+#    #+#             */
/*   Updated: 2024/04/29 00:43:11 by columbux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <sys/time.h>
# include <pthread.h>
# include <stdlib.h>
# include <stdio.h>

# define STD_ERROR 1

typedef struct s_philo_args
{
	int		num_philos;
	int		time_die;
	int		time_eat;
	int		time_sleep;
	int		num_eats;
}				t_args;

typedef struct s_stats
{
	int		id;
	int		n_ate;
	int		death;
}				t_stas;

typedef struct s_philos
{
	t_args	philos_args;
	t_stas	stats;
}				t_philosophers;

//init

int			ph_init_philos(t_philosophers *args, char **argv);

// utils.c

void		ph_error(char *message);
int			ph_atoi(char *str);
long long	timestamp(void);

#endif